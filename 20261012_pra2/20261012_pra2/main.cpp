#include<iostream>
#include"Character.h"
#include"Boss.h"
using namespace std;
int main(void)
{
	//コンストラクタ
	Character character("眠い");
	Boss boss("やる気のないボス");
	cout << character.GetName() << endl;
	character.Attack();

	cout << boss.GetName() << endl;
	boss.Attack();

	return 0;
}