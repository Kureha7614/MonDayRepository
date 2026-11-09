#include<iostream>
#include"Enemy.h"
#include<memory>
void ShowEnemy(const Enemy& enemy)
{
	std::cout << "Hp = " << enemy.GetHp() << std::endl;
}

int main(void)
{
	std::unique_ptr<Enemy> enemyPtr = std::make_unique<Enemy>();
	enemyPtr->GetHp();
	ShowEnemy(*enemyPtr);

	if (enemyPtr)
	{
		std::cout << "Enemy‚Í¶‚«‚Ä‚¢‚é" << std::endl;
	}
	else
	{
		std::cout << "Enemy‚ÍŽ€‚ñ‚Å‚¢‚é" << std::endl;
	}

	return 0;
}