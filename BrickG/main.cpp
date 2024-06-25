#include <SFML/Graphics.hpp>
#include <vector>
#include <algorithm>
#include <cmath>

// 윈도우 크기와 게임 객체의 크기 정의
const int windowWidth = 800;
const int windowHeight = 600;
const float ballRadius = 10.f;
const float ballSpeed = 8.f; // 추가된 부분
const float paddleWidth = 100.f;
const float paddleHeight = 20.f;
const float paddleSpeed = 8.f; // 추가된 부분
const float brickWidth = 60.f;
const float brickHeight = 20.f;
const int countBlocksX = 11; // 추가된 부분
const int countBlocksY = 4; // 추가된 부분

// 공 클래스 정의
class Ball {
public:
    sf::CircleShape shape;
    sf::Vector2f velocity{ -ballSpeed, -ballSpeed };

    Ball(float mX, float mY) {
        shape.setPosition(mX, mY);
        shape.setRadius(ballRadius);
        shape.setFillColor(sf::Color::Red);
        shape.setOrigin(ballRadius, ballRadius);
    }

    void update() {
        shape.move(velocity);

        if (left() < 0) velocity.x = ballSpeed;
        else if (right() > windowWidth) velocity.x = -ballSpeed;

        if (top() < 0) velocity.y = ballSpeed;
        else if (bottom() > windowHeight) velocity.y = -ballSpeed;
    }

    float x() { return shape.getPosition().x; }
    float y() { return shape.getPosition().y; }
    float left() { return x() - shape.getRadius(); }
    float right() { return x() + shape.getRadius(); }
    float top() { return y() - shape.getRadius(); }
    float bottom() { return y() + shape.getRadius(); }
};

// 패들 클래스 정의
class Paddle {
public:
    sf::RectangleShape shape;
    sf::Vector2f velocity;

    Paddle(float mX, float mY) {
        shape.setPosition(mX, mY);
        shape.setSize({ paddleWidth, paddleHeight });
        shape.setFillColor(sf::Color::Red);
        shape.setOrigin(paddleWidth / 2.f, paddleHeight / 2.f);
    }

    void update() {
        shape.move(velocity);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left) && left() > 0)
            velocity.x = -paddleSpeed;
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right) && right() < windowWidth)
            velocity.x = paddleSpeed;
        else
            velocity.x = 0;
    }

    float x() { return shape.getPosition().x; }
    float y() { return shape.getPosition().y; }
    float left() { return x() - shape.getSize().x / 2.f; }
    float right() { return x() + shape.getSize().x / 2.f; }
    float top() { return y() - shape.getSize().y / 2.f; }
    float bottom() { return y() + shape.getSize().y / 2.f; }
};

// 벽돌 클래스 정의
class Brick {
public:
    sf::RectangleShape shape;
    bool destroyed{ false };

    Brick(float mX, float mY) {
        shape.setPosition(mX, mY);
        shape.setSize({ brickWidth, brickHeight });
        shape.setFillColor(sf::Color::Yellow);
        shape.setOrigin(brickWidth / 2.f, brickHeight / 2.f);
    }

    float x() { return shape.getPosition().x; }
    float y() { return shape.getPosition().y; }
    float left() { return x() - shape.getSize().x / 2.f; }
    float right() { return x() + shape.getSize().x / 2.f; }
    float top() { return y() - shape.getSize().y / 2.f; }
    float bottom() { return y() + shape.getSize().y / 2.f; }
};

template<class T1, class T2>
bool isIntersecting(T1& mA, T2& mB) {
    return mA.right() >= mB.left() && mA.left() <= mB.right() && mA.bottom() >= mB.top() && mA.top() <= mB.bottom();
}

void testCollision(Paddle& mPaddle, Ball& mBall) {
    if (!isIntersecting(mPaddle, mBall)) return;

    mBall.velocity.y = -ballSpeed;

    if (mBall.x() < mPaddle.x())
        mBall.velocity.x = -ballSpeed;
    else
        mBall.velocity.x = ballSpeed;
}

void testCollision(Brick& mBrick, Ball& mBall) {
    if (!isIntersecting(mBrick, mBall)) return;

    mBrick.destroyed = true;

    float overlapLeft{ mBall.right() - mBrick.left() };
    float overlapRight{ mBrick.right() - mBall.left() };
    float overlapTop{ mBall.bottom() - mBrick.top() };
    float overlapBottom{ mBrick.bottom() - mBall.top() };

    bool ballFromLeft(abs(overlapLeft) < abs(overlapRight));
    bool ballFromTop(abs(overlapTop) < abs(overlapBottom));

    float minOverlapX{ ballFromLeft ? overlapLeft : overlapRight };
    float minOverlapY{ ballFromTop ? overlapTop : overlapBottom };

    if (abs(minOverlapX) < abs(minOverlapY))
        mBall.velocity.x = ballFromLeft ? -ballSpeed : ballSpeed;
    else
        mBall.velocity.y = ballFromTop ? -ballSpeed : ballSpeed;
}

int main() {
    Ball ball{ windowWidth / 2, windowHeight / 2 };
    Paddle paddle{ windowWidth / 2, windowHeight - 50 };

    std::vector<Brick> bricks;

    for (int iX{ 0 }; iX < countBlocksX; ++iX)
        for (int iY{ 0 }; iY < countBlocksY; ++iY)
            bricks.emplace_back((iX + 1) * (brickWidth + 3) + 22, (iY + 2) * (brickHeight + 3));

    sf::RenderWindow window{ {windowWidth, windowHeight}, "Arkanoid - 2" };
    window.setFramerateLimit(60);

    while (window.isOpen()) {
        window.clear(sf::Color::Black);

        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
                window.close();
        }

        ball.update();
        paddle.update();
        testCollision(paddle, ball);

        for (auto& brick : bricks) testCollision(brick, ball);

        bricks.erase(remove_if(begin(bricks), end(bricks), [](const Brick& mBrick) { return mBrick.destroyed; }), end(bricks));

        window.draw(ball.shape);
        window.draw(paddle.shape);
        for (auto& brick : bricks) window.draw(brick.shape);

        window.display();
    }

    return 0;
}
