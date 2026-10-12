#pragma once
#include"Character.h"
class Enemy :public Character
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="name"></param>
	Enemy(std::string name);
	void Attack() override;
};

