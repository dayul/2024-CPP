#include <SFML/Graphics.hpp>

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
