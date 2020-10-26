#ifndef player_h
#define player_h

#include <iostream>

void playerOptions();

class Player {
	//variables
private:
	float playerMoney = 35.0;
	float playerReputation = 5.0;
	std::string playerLocation ="Streets";
	int dayCount = 4;


public:
	void speak();
	Player(); //constructor
	~Player(); //destructor
};

#endif