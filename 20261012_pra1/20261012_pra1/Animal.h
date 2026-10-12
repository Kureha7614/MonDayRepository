#pragma once
#include <string>
class Animal
{
private:
	std::string name;
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Animal(std::string name);

	std::string GetName();
	/// <summary>
	/// なく
	/// </summary>
	virtual void Speak();
	
};

