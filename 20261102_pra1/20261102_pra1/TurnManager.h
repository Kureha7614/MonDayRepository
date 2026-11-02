#pragma once
class TurnManager
{
private:
	bool isPlayerTurn = true;// trueならプレイヤーのターン、falseなら敵のターン
public:
	TurnManager();
	void StartGame();// ゲーム開始時の処理
	void SwitchTurn();// ターンの切り替え処理
	bool IsPlayerTurn() const;// 現在のターンがプレイヤーかどうかを判定する処理
};

