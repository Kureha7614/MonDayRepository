#include "TurnManager.h"
#include<iostream>
TurnManager::TurnManager()
{

}

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

bool TurnManager::IsPlayerTurn() const
{
	return isPlayerTurn;
}
