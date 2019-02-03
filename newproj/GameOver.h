#include "point.h"

//the end screen if you run out of lives
class gameOver {

public:
	gameOver();
	~gameOver();

	bool run();

private:
	string message;
	sf::Text text;
	sf::Font font;
	sf::Text  chat;
	



};