#include "WinScreen.h"


//actual level (level 1)
class level1 {

public:
	level1();
	~level1();

	void setPlatforms(bool start);
	void setPoints();
	void setEnemies();

	int* run();

	void setScore();




private:
	int platNum;
	platform *mPlatforms;

	int pointNum;
	point *mPoint;

	int enemyNum;
   enemy *mEnemies;

	player me;

	background back;

	string message;
	sf::Text ScoreTxt;
	sf::Font font;

	int score;
	int frame;

	bool jump;

	int lives;
	string LivesMessage;
	sf::Text LivesTxt;
	sf::RectangleShape *displayLives;

	endThing ending;

	sf::SoundBuffer buff;
	sf::Sound sound;

};