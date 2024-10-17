﻿#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

int main() {

	enum App {
		WIDTH = 1200,
		HEIGHT = 700
	};

	RenderWindow window(VideoMode(App::WIDTH, App::HEIGHT), "shootingG");

	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}
		
		RectangleShape player;
		player.setSize(Vector2f(181.f, 75.f));
		player.setFillColor(Color::Magenta);
		player.setPosition((App::WIDTH / 2.f) - player.getSize().x, 600.f);

		// static method
		// TODO : 제대로 이동하도록 고치기
		if (Keyboard::isKeyPressed(Keyboard::Left))
			player.move(-10, 0);
		if (Keyboard::isKeyPressed(Keyboard::Right))
			player.move(10, 0);
		if (Keyboard::isKeyPressed(Keyboard::Up))
			player.move(0, -10);
		if (Keyboard::isKeyPressed(Keyboard::Down))
			player.move(0, 10);

		window.clear();
		window.draw(player);
		window.display();
	}
}