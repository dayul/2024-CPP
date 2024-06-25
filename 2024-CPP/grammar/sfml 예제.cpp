#include <SFML/Graphics.hpp>

int main()
{
    // â ����
    sf::RenderWindow window(sf::VideoMode(800, 600), "bricks");
    window.setFramerateLimit(60);       // 1�ʸ��� Frame��

    // �� ��ü ����
    sf::CircleShape circle(100.f);      // ������
    circle.setFillColor(sf::Color::Magenta);    // ä�� ���� 
    circle.setPosition(100.f, 100.f);   // ��ǥ�� ��ġ

    // �簢�� ��ü ����
    sf::RectangleShape rectangle(sf::Vector2f(200.f, 100.f));
    rectangle.setFillColor(sf::Color::Blue);
    rectangle.setPosition(400.f, 300.f);

    // �̺�Ʈ ���� ����
    while (window.isOpen())
    {
        rectangle.move(0.5f, 0);        
        sf::Event event;
        while (window.pollEvent(event))
        {
            // �ݱ� ��ư�� ������ �� ������ â�� ����
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // ȭ�� ����� (���׸��� ������ ������ ��)
        window.clear(sf::Color::White);

        // ���� �׸��� (ȭ�鿡 ���׸�)
        window.draw(circle);
        window.draw(rectangle);

        // ȭ�� ������Ʈ
        window.display();
    }

    return 0;
}
