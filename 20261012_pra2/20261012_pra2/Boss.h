#pragma once
#include"Character.h"
class Boss :public Character
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="name"></param>
	Boss(std::string name);
	void Attack() override;


};

