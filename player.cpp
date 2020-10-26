#include <iostream>

#include "../street-game/src/player/player.h"

// constructor
Player::Player()
{
	std::cout << "Player created." << std::endl;
}

// destructor
Player::~Player()
{
	std::cout << "Player died." << std::endl;
}

void Player::speak()
{
	std::cout << "Hi, Im player." << std::endl;
}
