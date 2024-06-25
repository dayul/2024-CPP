#include <SFML/Graphics.hpp>

int main()
{
    // 창 생성
    sf::RenderWindow window(sf::VideoMode(800, 600), "bricks");
    window.setFramerateLimit(60);       // 1초마다 Frame수

    // 원 객체 생성
    sf::CircleShape circle(100.f);      // 반지름
    circle.setFillColor(sf::Color::Magenta);    // 채울 색상 
    circle.setPosition(100.f, 100.f);   // 좌표의 위치

    // 사각형 객체 생성
    sf::RectangleShape rectangle(sf::Vector2f(200.f, 100.f));
    rectangle.setFillColor(sf::Color::Blue);
    rectangle.setPosition(400.f, 300.f);

    // 이벤트 루프 시작
    while (window.isOpen())
    {
        rectangle.move(0.5f, 0);        
        sf::Event event;
        while (window.pollEvent(event))
        {
            // 닫기 버튼을 눌렀을 때 윈도우 창이 닫힘
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // 화면 지우기 (덧그리기 때문에 지워야 함)
        window.clear(sf::Color::White);

        // 도형 그리기 (화면에 덧그림)
        window.draw(circle);
        window.draw(rectangle);

        // 화면 업데이트
        window.display();
    }

    return 0;
}
