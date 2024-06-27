#include <SFML/Graphics.hpp>

// Ball 클래스 정의
class Ball {
public:
    sf::CircleShape shape;
    sf::Vector2f velocity;

    // 생성자
    Ball(float mX, float mY) {
        shape.setPosition(mX, mY);      // 위치
        shape.setRadius(10.f);          // 크기
        shape.setFillColor(sf::Color::Red);
        shape.setOrigin(10.f, 10.f);
        velocity = { -8.f, -8.f };      // 왼쪽으로, 위로 (속도)
    }

    void update() {
        shape.move(velocity);

        if (left() < 0) velocity.x = 8.f;
        else if (right() > 800) velocity.x = -8.f;

        if (top() < 0) velocity.y = 8.f;
        else if (bottom() > 600) velocity.y = -8.f;
    }

    float left() { return shape.getPosition().x - shape.getRadius(); }
    float right() { return shape.getPosition().x + shape.getRadius(); }
    float top() { return shape.getPosition().y - shape.getRadius(); }
    float bottom() { return shape.getPosition().y + shape.getRadius(); }
};

// Paddle 클래스 정의
class Paddle {
public:
    sf::RectangleShape shape;
    const float paddleWidth = 100.f;
    const float paddleHeight = 20.f;
    const float paddleVelocity = 10.f;

    Paddle(float mX, float mY) {
        shape.setPosition(mX, mY);
        shape.setSize({ paddleWidth, paddleHeight });
        shape.setFillColor(sf::Color::Blue);
        shape.setOrigin(paddleWidth / 2.f, paddleHeight / 2.f);         // 기준점을 중심으로 변경
    }

    void update() {
        // 왼쪽 화살키를 누르고 && 왼쪽 끝에 도달하지 않은경우 move
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left) && left() > 0) {        
            shape.move(-paddleVelocity, 0.f);
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right) && right() < 800) {
            shape.move(paddleVelocity, 0.f);
        }
    }

    // 기준점을 중심으로 변경했기 때문에 - shape.getSize().x / 2.f;를 진행
    float left() { return shape.getPosition().x - shape.getSize().x / 2.f; }
    float right() { return shape.getPosition().x + shape.getSize().x / 2.f; }
    // paddle 좌우로만 움직이지만 확장성을 고려해 놔둠
    float top() { return shape.getPosition().y - shape.getSize().y / 2.f; }
    float bottom() { return shape.getPosition().y + shape.getSize().y / 2.f; }
};

int main()
{
    // init
    // 창 생성
    sf::RenderWindow window(sf::VideoMode(800, 600), "bricks");
    window.setFramerateLimit(60);       // 1초마다 Frame수

    Ball ball(800 / 2.f, 300);
    Paddle paddle(600.f, 550.f);            // paddle 생성

    // 이벤트 루프 시작
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            // input이 들어올 때마다 행동을 해라
            // 닫기 버튼을 눌렀을 때 윈도우 창이 닫힘
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // update
        paddle.update();
        ball.update();

        // draw
        // 화면 지우기 (덧그리기 때문에 지워야 함)
        window.clear(sf::Color::White);

        // 그리기
        window.draw(paddle.shape);      // 그리는 건 shape가 담당하므로
        // paddle.draw();       다른 방법 (지금은 안됨)
        window.draw(ball.shape);

        // 화면 업데이트
        window.display();
    }

    return 0;
}
