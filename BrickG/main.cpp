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

int main()
{
    // init
    // 창 생성
    sf::RenderWindow window(sf::VideoMode(800, 600), "bricks");
    window.setFramerateLimit(60);       // 1초마다 Frame수

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

        // draw
        // 화면 지우기 (덧그리기 때문에 지워야 함)
        window.clear(sf::Color::White);

        // 화면 업데이트
        window.display();
    }

    return 0;
}
