#include "Game.h"

Game::Game()
{
	
}

void Game::Start()
{
	Player player;
	Enemy enemy;
	TurnManager turnmanager;
	turnmanager.StartGame();
	int Input;
	while (true)
	{
		if (turnmanager.IsPlayerTurn() == true)
		{
			std::cout << "1.UŒ‚ 2.‰ñ•œ 3.–hŒä" << std::endl;
			std::cin >> Input;
			switch (Input)
			{
			case 1:
				player.Attack(&enemy);
				break;
			case 2:
				player.Heal();
				break;
			case 3:
				player.Reduce();
				break;
			default:
				std::cout << "–³Œø‚È“ü—Í‚Å‚·B" << std::endl;
				continue;
			}
			player.ShowHP();
		}
		else
		{
			int enemyAction = rand() % 3 + 1; // ƒ‰ƒ“ƒ_ƒ€‚É“G‚Ìs“®‚ğŒˆ’èi1:UŒ‚, 2:‰ñ•œ, 3:–hŒäj
			switch (enemyAction)
			{
			case 1:
				enemy.Attack(&player);
				break;
			case 2:
				std::cout << "“G‚Í‰ñ•œ‚µ‚½I" << std::endl;
				break;
			case 3:
				enemy.Reduce();
				break;
			default:
				break;
			}
			enemy.ShowHP();
		}
		if (player.GetHP() <= 0)
		{
			std::cout << "ƒvƒŒƒCƒ„[‚Í”s–k‚µ‚½I" << std::endl;
			break;
		}
		else if (enemy.GetHP() <= 0)
		{
			std::cout << "ƒvƒŒƒCƒ„[‚ÍŸ—˜‚µ‚½I" << std::endl;
			break;
		}
		turnmanager.SwitchTurn();
	}

}
