﻿#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

#define	WINDOW_WIDTH 1200
#define	WINDOW_HEIGHT 700

int main() {
	RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "shootingG");

	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}
		
		RectangleShape player;
		player.setSize(Vector2f(181.f, 75.f));
		player.setFillColor(Color::Magenta);
		player.setPosition(500.f, 400.f);

		window.clear();
		window.draw(player);
		window.display();
	}
}