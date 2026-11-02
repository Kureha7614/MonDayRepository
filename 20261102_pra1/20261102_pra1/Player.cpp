#include "Player.h"
#include "Enemy.h"

Player::Player()
{
	hp = MAX_HP;
	heal = MAX_HEAL;
	reduction = 0;
	damage = MAX_PLAYER_DAMAGE;
}

void Player::Attack(Enemy* target)
{
	std::cout << "プレイヤーの攻撃！" << std::endl;
	target->TakeDamage(damage);
}

void Player::Heal()
{
	std::cout << "プレイヤーの回復！" << std::endl;
	hp += heal;
}

void Player::Reduce()
{
	std::cout << "プレイヤーの防御！" << std::endl;
	reduction = MAX_Player_Reduction;
}

void Player::TakeDamage(int damage)
{
	if (reduction > 0)
	{
		damage -= reduction;
		if (damage < 0)
		{
			damage = 0;
		}
		reduction = 0;
	}
	hp -= damage;
	if (hp < 0)	
	{
		hp = 0;
	}
	std::cout << "プレイヤーは" << damage << "のダメージを受けた！" << std::endl;
	std::cout << "プレイヤーの残りHP：" << hp << std::endl;
}

void Player::ShowHP()
{
	std::cout << "プレイヤーの残りHP：" << hp << std::endl;
	std::cout << "\n";
}

int Player::GetHP()
{
	return hp;
}
