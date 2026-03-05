#pragma once
#include"Player.h"
#include<string>

class Archer : public Player
{
public:
	Archer(std::string Nickname);
	void attack() override;
	void attack(Monster* monster) override;
};