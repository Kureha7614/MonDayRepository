#pragma once
#include"Character.h"
class Player :public Character
{
public:
	/// <summary>
	///	コンストラクタ
	/// </summary>
	/// <param name="name"></param>
	Player(std::string name);
	/// <summary>
	/// 攻撃する
	/// </summary>
	void Attack() override;
};

