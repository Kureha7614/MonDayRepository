#include "Enemy.h"
#include "Player.h"

Enemy::Enemy()
{
	hp = MAX_HP;
	damage = MAX_ENEMY_DAMAGE;
	reduction = 0;
}

void Enemy::Attack(Player* target)
{
	std::cout << "“G‚ÌUŒ‚I" << std::endl;
	target->TakeDamage(damage);
}


void Enemy::Reduce()
{
	std::cout << "“G‚Ì–hŒäI" << std::endl;
	reduction = MAX_Enemy_Reduction;
}

void Enemy::TakeDamage(int damage)
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
	std::cout << "“G‚Í" << damage << "‚Ìƒ_ƒ[ƒW‚ðŽó‚¯‚½I" << std::endl;
	std::cout << "“G‚ÌŽc‚èHPF" << hp << std::endl;
}

void Enemy::ShowHP()
{
	std::cout << "“G‚ÌŽc‚èHPF" << hp << std::endl;
	std::cout << "\n";
}

int Enemy::GetHP()
{
	return hp;
}
