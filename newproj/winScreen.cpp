#include "winScreen.h"


winScreen::winScreen() {
	this->font.loadFromFile("SuperMario256.ttf");
	this->message = "Winner";
	this->text.setPosition(sf::Vector2f(30, 10));
	this->text.setCharacterSize(100);
	this->text.setColor(sf::Color::Red);
	this->text.setFont(font);
	this->text.setString(message);

	time = "Time Bonus: ";
	score = "points: ";
	life = "life bonus 5x";
	total = "total score: ";
	

	mTimeBonus.setFont(font);
	mScore.setFont(font);
	mLifeBonus.setFont(font);
	mTotalScore.setFont(font);
	mTimeBonus.setCharacterSize(40);
	mLifeBonus.setCharacterSize(40);
	mScore.setCharacterSize(40);
	mTotalScore.setCharacterSize(40);
	mScore.setPosition(sf::Vector2f(20, 120));
	mLifeBonus.setPosition(sf::Vector2f(20, 180));
	mTimeBonus.setPosition(sf::Vector2f(20, 240));
	mTotalScore.setPosition(sf::Vector2f(20,300));


	string choice = "Press 'C' to try chat room";
	chat.setString(choice);
	chat.setFont(font);
	chat.setPosition(sf::Vector2f(20, 360));
	chat.setCharacterSize(30);
}
winScreen::~winScreen(){

}

bool winScreen::run(int score, int frames,int lives){
	sf::RenderWindow window(sf::VideoMode(750, 800), "winner");
	int maxTime = 17000;
	int timeBonus = (maxTime-frames) / 400;
	int tot=0;
	string temp;
	string scr;

	char buffer[33];
	

	

	if (timeBonus < 0) {
		timeBonus = 0;
	}
 scr = string(itoa(timeBonus, buffer, 10));
	time = time + scr;
	mTimeBonus.setString(time);

	tot = 5 * lives;
	scr = string(itoa(lives, buffer, 10));
	life = life + scr+"=";
	scr = string(itoa(tot, buffer, 10));
	life = life + scr;
	mLifeBonus.setString(life);


	 scr = string(itoa(score, buffer, 10));
	this->score = "points:" + scr;
	mScore.setString(this->score);

	tot = tot + timeBonus + score;
	 scr = string(itoa(tot, buffer, 10));
	total = total + scr;
	mTotalScore.setString(total);
	
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
		window.draw(mTimeBonus);
		window.draw(mTotalScore);
		window.draw(mLifeBonus);
		window.draw(mScore);
		window.draw(chat);
		window.draw(this->text);
		window.display();


	}


}
