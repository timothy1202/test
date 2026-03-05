#pragma once
#include"Player.h"
#include<string>

class Thief : public Player
{
public:
	Thief(std::string nickname);
	void attack() override;
	void attack(Monster* monster) override;
};