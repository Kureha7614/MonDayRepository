#pragma once
class Enemy
{
private:
	int hp = 100;
public:
	Enemy();
	~Enemy();
	int GetHp()const;
	void Draw();
};
