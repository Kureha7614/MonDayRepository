#include "Game.h"

Game::Game()
{
	
}
//ゲームの開始処理
void Game::Start()
{
	//インスタンス化
	Player player;
	Enemy enemy;
	TurnManager turnmanager;
	turnmanager.StartGame();
	int Input;//プレイヤーの入力を格納する変数
	while (true)
	{
		//現在のターンがプレイヤーかどうかを判定
		if (turnmanager.IsPlayerTurn() == true)
		{
			std::cout << "1.攻撃 2.回復 3.防御" << std::endl;
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
				std::cout << "無効な入力です。" << std::endl;
				continue;
			}
			player.ShowHP();
		}
		//現在のターンが敵かどうかを判定
		else
		{
			int enemyAction = rand() % 3 + 1; // ランダムに敵の行動を決定（1:攻撃, 2:回復, 3:防御）
			//敵の行動を決定
			switch (enemyAction)
			{
			case 1:
				enemy.Attack(&player);
				break;
			case 2:
				std::cout << "敵は回復した！" << std::endl;
				break;
			case 3:
				enemy.Reduce();
				break;
			default:
				break;
			}
			enemy.ShowHP();
		}
		//プレイヤーと敵のHPを判定し、どちらかのHPが0以下になった場合、ゲームを終了する
		if (player.GetHP() <= 0)
		{
			std::cout << "プレイヤーは敗北した！" << std::endl;
			break;
		}
		else if (enemy.GetHP() <= 0)
		{
			std::cout << "プレイヤーは勝利した！" << std::endl;
			break;
		}
		//ターンを切り替える
		turnmanager.SwitchTurn();
	}

}
