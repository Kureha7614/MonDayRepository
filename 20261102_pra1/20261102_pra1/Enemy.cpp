#include "Enemy.h"
#include "Player.h"
//ƒRƒ“ƒXƒgƒ‰ƒNƒ^
Enemy::Enemy()
{
	hp = MAX_HP;
	damage = MAX_ENEMY_DAMAGE;
	reduction = 0;
}
//“G‚ÌUŒ‚
void Enemy::Attack(Player* target)
{
	std::cout << "“G‚ÌUŒ‚I" << std::endl;
	target->TakeDamage(damage);
}

//“G‚Ì–hŒä
void Enemy::Reduce()
{
	std::cout << "“G‚Ì–hŒäI" << std::endl;
	reduction = MAX_Enemy_Reduction;
}
//“G‚ªƒ_ƒ[ƒW‚ğó‚¯‚éˆ—
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
	std::cout << "“G‚Í" << damage << "‚Ìƒ_ƒ[ƒW‚ğó‚¯‚½I" << std::endl;
	std::cout << "“G‚Ìc‚èHPF" << hp << std::endl;
}
//“G‚ÌHP‚ğ•\¦‚·‚éˆ—
void Enemy::ShowHP()
{
	std::cout << "“G‚Ìc‚èHPF" << hp << std::endl;
	std::cout << "\n";
}
//“G‚ÌHP‚ğæ“¾‚·‚éˆ—
int Enemy::GetHP()
{
	return hp;
}
