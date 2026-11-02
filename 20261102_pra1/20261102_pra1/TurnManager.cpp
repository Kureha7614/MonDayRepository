#include "TurnManager.h"
#include<iostream>
TurnManager::TurnManager()
{

}
//ゲーム開始時の処理
void TurnManager::StartGame()
{
	if (isPlayerTurn == true)
	{
		std::cout << "プレイヤーのターンです！" << std::endl;
	}
	else
	{
		std::cout << "敵のターンです！" << std::endl;
	}
}
//ターンの切り替え処理
void TurnManager::SwitchTurn()
{
	if (isPlayerTurn == true)
	{
		std::cout << "プレイヤーのターンが終了しました。" << std::endl;
	}
	else
	{
		std::cout << "敵のターンが終了しました。" << std::endl;
	}
	isPlayerTurn = !isPlayerTurn;
}
//現在のターンがプレイヤーかどうかを判定する処理
bool TurnManager::IsPlayerTurn() const
{
	return isPlayerTurn;
}
