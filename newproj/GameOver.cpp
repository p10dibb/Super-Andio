#include "GameOver.h"


gameOver::gameOver() {
	this->font.loadFromFile("SuperMario256.ttf");
	this->message = "Game Over";
	this->text.setPosition(sf::Vector2f(10, 10));
	this->text.setCharacterSize(100);
	this->text.setColor(sf::Color::Red);
	this->text.setFont(font);
	this->text.setString(message);
	string choice = "Press 'C' to try chat room";
	chat.setString(choice);
	chat.setFont(font);
	chat.setPosition(sf::Vector2f(30, 150));
	chat.setCharacterSize(30);

}
gameOver::~gameOver() {

}

bool gameOver::run() {
	sf::RenderWindow window(sf::VideoMode(750, 400), "Game over");

	while (window.isOpen()) {

		sf::Event event;
			while (window.pollEvent(event)) {
				if (event.type == sf::Event::Closed) {
					window.close();
					return false;
				}
			}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
			window.close();
			return false;
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::C)) {
			window.close();
			return true;

		}

		window.draw(chat);
		window.draw(this->text);
		window.display();
		

	}


}