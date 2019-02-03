#include "GameOver.h"

//final screen if you win and totals up the score
class winScreen {

public:
	winScreen();
	~winScreen();

	bool run(int score, int frames,int lives);


private:
	string message;
	sf::Text text;
	sf::Font font;
	sf::Text  chat;
	
	sf::Text mScore;
	sf::Text mLifeBonus;
	sf::Text mTimeBonus;
	sf::Text mTotalScore;
	string score;
	string life;
	string time;
	string total;


};