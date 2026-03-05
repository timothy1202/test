#pragma once
#include"Player.h"
#include<string>

class Magician : public Player
{
public:
	Magician(std::string nickname);
	void attack() override;
	void attack(Monster* monster) override;
};