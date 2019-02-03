#include "level1.h"

level1::level1() {

	buff.loadFromFile("backGroundMusic.wav");


	sound.setBuffer(buff);

	platNum = 15;
	mPlatforms = new platform[platNum];

	pointNum = 30;
	mPoint = new point[pointNum];

	jump = false;
	frame = 0;
	score = 0;

	enemyNum = 15;
	mEnemies = new enemy[enemyNum];


	font.loadFromFile("SuperMario256.ttf");
	message = "Score: 0";
	ScoreTxt.setColor(sf::Color::Black);
	ScoreTxt.setFont(font);
	ScoreTxt.setString(message);
	ScoreTxt.setCharacterSize(40);
	ScoreTxt.setPosition(sf::Vector2f(720, 10));


	LivesMessage = "Lives:";
	LivesTxt.setCharacterSize(40);
	LivesTxt.setColor(sf::Color::Black);
	LivesTxt.setFont(font);
	LivesTxt.setString(LivesMessage);
	LivesTxt.setPosition(sf::Vector2f(80, 10));

	lives = 3;
	displayLives = new sf::RectangleShape[3];
	for (int i = 0; i < lives;i++) {
		displayLives[i].setFillColor(sf::Color::Red);
		displayLives[i].setSize(sf::Vector2f(10, 10));
		displayLives[i].setPosition(sf::Vector2f((215 + 25 * i), 30));

	}


	

}
level1::~level1() {

	//delete(mPoint);
	//delete(mPlatforms);
}

//sets sizes and positionns of platforms
void level1::setPlatforms(bool start) {

	//to adjust the amount of platorms change platNum in constructer
	mPlatforms[1].setPosition(sf::Vector2f(-550, 0)); //-550->-500

	mPlatforms[0].setPosition(sf::Vector2f(-500, 550));// -500->500
	
	mPlatforms[2].setPosition(sf::Vector2f(700, 500));

	mPlatforms[3].setPosition(sf::Vector2f(750, 350));
	mPlatforms[3].RemoveTexture();

	mPlatforms[4].setPosition(sf::Vector2f(750, 200));//500 ->1100
	mPlatforms[4].RemoveTexture();

	mPlatforms[5].setPosition(sf::Vector2f(1400, 350)); //1100->1700

	mPlatforms[6].setPosition(sf::Vector2f(1800, 250));

	mPlatforms[7].setPosition(sf::Vector2f(1800, 450));  //1700-2500

	mPlatforms[8].setPosition(sf::Vector2f(2500, 550));//2500-3500

	mPlatforms[9].setPosition(sf::Vector2f(3500, 500)); //3500-4000
	
	mPlatforms[10].setPosition(sf::Vector2f(4000, 450));//4000-4500

	mPlatforms[11].setPosition(sf::Vector2f(4500, 400));//4500-5000
	

	mPlatforms[12].setPosition(sf::Vector2f(5200, 500));//5000-5300


	mPlatforms[13].setPosition(sf::Vector2f(5400, 400));//5300-5500


	mPlatforms[14].setPosition(sf::Vector2f(5900, 550));//5500-6400

	
	
	//put all setSize in here;
	if (start == true) {
		mPlatforms[6].setSize(sf::Vector2f(700, 50));
		mPlatforms[7].setSize(sf::Vector2f(700, 150));
		mPlatforms[5].setSize(sf::Vector2f(300, 250));
		mPlatforms[4].setSize(sf::Vector2f(300, 10));
		mPlatforms[3].setSize(sf::Vector2f(300, 10));
		mPlatforms[0].setSize(sf::Vector2f(1000, 50));
		mPlatforms[2].setSize(sf::Vector2f(400, 100));
		mPlatforms[8].setSize(sf::Vector2f(1000, 50));
		mPlatforms[9].setSize(sf::Vector2f(500, 100));
		mPlatforms[10].setSize(sf::Vector2f(500, 150));
		mPlatforms[11].setSize(sf::Vector2f(500, 200));
		mPlatforms[1].setSize(sf::Vector2f(50, 600));

		mPlatforms[13].setSize(sf::Vector2f(100, 200));
		mPlatforms[12].setSize(sf::Vector2f(100, 100));
		
	}



	ending.setPosition(sf::Vector2f(6300, 370));


}

//sets sizes and positionns of points
void level1::setPoints() {

	//to increase amount change pointNum in constructer;
	mPoint[2].setPosition(sf::Vector2f(800, 470));
	mPoint[0].setPosition(sf::Vector2f(900, 470));
	mPoint[1].setPosition(sf::Vector2f(1000, 470));
	mPoint[3].setPosition(sf::Vector2f(1450, 320));
	mPoint[4].setPosition(sf::Vector2f(1550, 320));
	mPoint[5].setPosition(sf::Vector2f(1650, 320));
	mPoint[6].setPosition(sf::Vector2f(1950, 220));
	mPoint[7].setPosition(sf::Vector2f(2150, 220));
	mPoint[8].setPosition(sf::Vector2f(1900, 420));
	mPoint[9].setPosition(sf::Vector2f(2100, 420));
	mPoint[10].setPosition(sf::Vector2f(2300, 420));

	mPoint[11].setPosition(sf::Vector2f(2600, 520));
	mPoint[12].setPosition(sf::Vector2f(2800, 520));
	mPoint[13].setPosition(sf::Vector2f(3000, 520));
	mPoint[14].setPosition(sf::Vector2f(3200, 520));
	mPoint[15].setPosition(sf::Vector2f(3400, 520));

	mPoint[16].setPosition(sf::Vector2f(3650, 470));
	mPoint[17].setPosition(sf::Vector2f(3850, 470));
	mPoint[18].setPosition(sf::Vector2f(4150, 420));
	mPoint[19].setPosition(sf::Vector2f(4350, 420));
	mPoint[20].setPosition(sf::Vector2f(4650, 370));
	mPoint[21].setPosition(sf::Vector2f(4850, 370));
	mPoint[22].setPosition(sf::Vector2f(5250, 470));
	mPoint[23].setPosition(sf::Vector2f(5450, 370));
	mPoint[24].setPosition(sf::Vector2f(5950, 520));
	mPoint[25].setPosition(sf::Vector2f(6100, 520));
	mPoint[26].setPosition(sf::Vector2f(-400, 520));
	mPoint[27].setPosition(sf::Vector2f(-450, 520));
	mPoint[28].setPosition(sf::Vector2f(-350, 520));
	mPoint[29].setPosition(sf::Vector2f(-300, 520));
}

//sets sizes and positionns of enemies
void level1::setEnemies()   {

	mEnemies[0].setPosition(sf::Vector2f(780, 470));
	mEnemies[0].setDistance(340);

	mEnemies[2].setPosition(sf::Vector2f(2000, 215));
	mEnemies[2].setDistance(600);

	mEnemies[1].setPosition(sf::Vector2f(2025, 415));
	mEnemies[1].setDistance(600);

	mEnemies[3].setPosition(sf::Vector2f(1950, 415));
	mEnemies[3].setDistance(600);
	mEnemies[4].setPosition(sf::Vector2f(2075, 415));
	mEnemies[4].setDistance(600);
	mEnemies[5].setPosition(sf::Vector2f(2600, 515));
	mEnemies[5].setDistance(500);
	mEnemies[6].setPosition(sf::Vector2f(2700, 515));
	mEnemies[6].setDistance(500);
	mEnemies[7].setPosition(sf::Vector2f(2800, 515));
	mEnemies[7].setDistance(500);
	mEnemies[8].setPosition(sf::Vector2f(3200, 515));
	mEnemies[8].setDistance(300);
	mEnemies[9].setPosition(sf::Vector2f(3300, 515));
	mEnemies[9].setDistance(300);
	mEnemies[10].setPosition(sf::Vector2f(3550, 465));
	mEnemies[10].setDistance(400);
	mEnemies[11].setPosition(sf::Vector2f(3600, 465));
	mEnemies[11].setDistance(350);
	mEnemies[14].setPosition(sf::Vector2f(4500, 365));
	mEnemies[14].setDistance(950);

	mEnemies[12].setPosition(sf::Vector2f(4050, 415));
	mEnemies[12].setDistance(400);

	mEnemies[13].setPosition(sf::Vector2f(4000, 415));
	mEnemies[13].setDistance(450);


}

int* level1::run() {

	sf::RenderWindow window(sf::VideoMode(windowWidth, windowHight), "mario");

	int collide = 0; //0-no collision,1-collision on left,2-collision on left
	int enemyCollide = -1;
	int killEnemy = -1;
	int ret[4] = { -1 };//0-score, 1-{-1-Null,0-lose,1-win},2-Frames,3-lives
	bool end=false;

	//initially places all of the level objects
	this->setPlatforms(true);
	this->setPoints();
	this->setEnemies();
	sound.play(); //plays background music


	while (window.isOpen()) {
		
		//if player falls off screen or is killed by an enemy reset the level and removes a life
		if (me.getTop() >= windowHight||enemyCollide>-1) {
			lives--;
			back.reset();
			setPlatforms(false);
			setEnemies();
			setPoints();
			score = 0;
			ScoreTxt.setString("Score: 0");
			me.setVelocity(0);
			me.setPosition(sf::Vector2f(280, 100));
			frame = 0;
		

			if (lives <= 0) {
				window.close();
				ret[1] = 0;
			}
		}


		//if user closes window
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
			window.close();
		}

		window.clear();
		window.draw(back.getSprite());//draws background
		back.move(collide);//moves background




	
		//jumps/falls
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && jump == false) {
			me.setVelocity(3);
			jump = true;
		}
		if (jump == true && frame % 2 == 0) {
			me.jump();
		}
		//checks if on platform to see if one should fall
		jump = me.onPlatform(mPlatforms, platNum);


	


		collide = me.getWallCollision(mPlatforms, platNum);//checks if running into wall
		enemyCollide = me.getEnemyCollision(mEnemies, enemyNum);//checks if collided with enemy
		killEnemy=me.onEnemy(mEnemies, enemyNum);//checks if player jumped on top of enemy
	
		 
		 //if player land on top of enemy remove the enemy and get 2 points;
		if (killEnemy != -1) {
		mEnemies[killEnemy].setPosition(sf::Vector2f(-100, -100)); //i couldnt dealocate the enemy so i just displaced them
			killEnemy = -1;//set enemy collision to false
			setScore();//adds point to score
			setScore();//adds point to score
		}

	
		//platform draw and movement
		for (int i = 0; i < platNum; i++) {
		

			window.draw(mPlatforms[i].getRectangle());
			window.draw(mPlatforms[i].getSprite());
			mPlatforms[i].move(collide);

		}



		//point draw and movement
		for (int i = 0; i < pointNum; i++) {
			window.draw(mPoint[i].getSprite());
			mPoint[i].move(collide);
			if (mPoint[i].getCollision(me)) {
				setScore();
			}
		}

		//enemy movement and drawing
		for (int i = 0; i < enemyNum; i++) {
			//	window.draw(mEnemies[i].getRectangle());
			window.draw(mEnemies[i].getSprite());
			mEnemies[i].move(collide, frame);
		}


		//player sprite animation
		me.setSprite(frame);
		window.draw(me.getSprite());//displays player
		

		//displays text
		window.draw(ScoreTxt);
		window.draw(LivesTxt);

		//displays remaining lives
		for (int i = 0; i < lives; i++) {
			window.draw(displayLives[i]);
		}

		//displays end flag and moves
		window.draw(ending.getSprite());
		ending.move(collide);


	
		end=me.endLevel(ending); //checks if player collides with flag and ends level
		if (end == true) {

			ret[1] = 1;
			window.close();
		}


		window.display();

		frame++;
		
	}
	ret[2] = frame;
	ret[0] = score;
	ret[3] = lives;
	return ret;
}

//adds 1 point to score and converts to string
void level1::setScore() {
	score++;
	char buffer[33];
	string scr = string(itoa(score, buffer, 10));

	
	
	message = "score: " + scr;

	ScoreTxt.setString(message);

}