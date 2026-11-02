#pragma once
class TurnManager
{
private:
	bool isPlayerTurn = true;
public:
	TurnManager();
	void StartGame();
	void SwitchTurn();
	bool IsPlayerTurn() const;
};

