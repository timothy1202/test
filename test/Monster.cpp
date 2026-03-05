#include "Monster.h"
#include<iostream>
#include<string>

using namespace std;

Monster::Monster(std::string nickname):HP(10),power(30),defence(10),speed(10)
{
	name = nickname;
	cout << "몬스터 생성" << endl;
}

void Monster::attack(Player* target)
{
	if (target == nullptr) return;
	
	cout << "몬스터가 공격합니다." << endl;

	int damage = this->power - target->getDefence();
	if (damage <= 0)
	{
		damage = 1;
	}

	target->setHP(target->getHP() - damage);

	if (target->getHP() < 1)
	{
		cout << "플레이어가 죽었습니다." << endl;
	}
	else
	{
		cout << "플레이어의 체력은" << target->getHP() << "입니다." << endl;
	}
}

string Monster::getName() {return name;}
int Monster::getHP() { return HP; }
int Monster::getPower() {return power;}
int Monster::getDefence() {return defence;}
int Monster::getSpeed() {return speed;}


void Monster::setName(string name) {this->name = name;}
void Monster::setHP(int HP) {this->HP = HP;}
void Monster::setPower(int power) {this->power = power;}
void Monster::setDefence(int defence) {this->defence = defence;}
void Monster::setSpeed(int speed) { this->speed = speed; }

