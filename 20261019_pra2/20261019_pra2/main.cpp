#include<iostream>
#include"MagicalGirl.h"
#include"Homura.h"
#include"Madoka.h"
#include"Kyouko.h"
#include"Sayaka.h"
#include"Mami.h"
using namespace std;

int main(void)
{
	//インスタンス化
	MagicalGirl* magicalgirls[5];
	Madoka madoka;
	Homura homura;
	Kyouko kyouko;
	Sayaka sayaka;
	Mami mami;
	//ポインタ
	magicalgirls[0] = &madoka;
	magicalgirls[1] = &homura;
	magicalgirls[2] = &kyouko;
	magicalgirls[3] = &sayaka;
	magicalgirls[4] = &mami;
	//表示
	for(int i = 0;i < 5;i++)
	{
		magicalgirls[i]->Fight();
		magicalgirls[i]->ShowProfile();
	}
	return 0;
}