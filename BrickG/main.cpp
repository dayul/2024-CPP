#include <SFML/Graphics.hpp>

int main()
{
    // init
    // â ����
    sf::RenderWindow window(sf::VideoMode(800, 600), "bricks");
    window.setFramerateLimit(60);       // 1�ʸ��� Frame��

    // �̺�Ʈ ���� ����
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            // input�� ���� ������ �ൿ�� �ض�
            // �ݱ� ��ư�� ������ �� ������ â�� ����
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // draw
        // ȭ�� ����� (���׸��� ������ ������ ��)
        window.clear(sf::Color::White);

        // ȭ�� ������Ʈ
        window.display();
    }

    return 0;
}
