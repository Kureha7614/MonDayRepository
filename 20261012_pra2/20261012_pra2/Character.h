#pragma once
#include<string>
class Character
{
private:
	std::string name;
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Character(std::string name);

	std::string GetName();

	/// <summary>
	/// 攻撃する
	/// </summary>
	virtual void Attack();

};

