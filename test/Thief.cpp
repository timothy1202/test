#include"Thief.h"
#include"Monster.h"

#include<iostream>
#include<string>
using namespace std;

Thief::Thief(std::string nickname):Player(nickname)
{

}

void Thief::attack()
{
	cout << "단검을 휘두릅니다!" << endl;
}

void Thief::attack(Monster* monster) {
	// 플레이어의 공격력-몬스터의 방어력을 계산하여 데미지로 정의합니다.
		// 계산된 데미지가 0 이하일 경우, 데미지를 1로 정의합니다.

		// 공격 문장을 출력합니다.
		// - 전사, 마법사: 계산된 데미지로 1회 공격
		// - 궁수: 계산된 데미지/3으로 3회 공격 (소수점 생략)
		// - 도적: 계산된 데미지/5으로 5회 공격 (소수점 생략)
		// - 궁수와 도적의 경우, 3과 5로 나눈 결과가 0이라면 1로 정의합니다.
		// ex) * 슬라임에게 화살로 3의 피해를 입혔다! 3번 출력

		// 몬스터의 setHP를 호출하여 몬스터의 HP-데미지를 계산한 값을 매개변수로 전달합니다.
		// 몬스터의 getHP를 호출 분기문이 실행됩니다.
		// 몬스터가 생존했을 경우 몬스터의 남은 HP 출력
		// 몬스터가 생존하지 못했을 경우 플레이어의 승리 문구 출력

	int damage = this->getPower() - monster->getDefence();

	if (damage <= 0)
	{
		damage = 1;
	}

	int each_damage = damage / 5;
	if (each_damage == 0)
	{
		each_damage = 1;
	}

	for (int i = 0; i < 5; ++i)
	{
		cout << "몬스터에게 " << each_damage << "의 피해를 입혔다!" << endl;
	}

	int total_damage = each_damage * 5;

	monster->setHP(monster->getHP() - total_damage);

	if (monster->getHP() > 0)
	{
		cout << "몬스터의 체력은" << monster->getHP() << "입니다." << endl;
	}
	else
	{
		cout << "플레이어가 승리했습니다." << endl;
	}
}