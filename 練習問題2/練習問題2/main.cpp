#include<iostream>
#include"ScoreManager.h"

int main(void)
{
	int point = 0;
	ScoreManager scoremanager;//オブジェクト
	scoremanager.Initialize();//初期化
	scoremanager.Update(point);//更新
	scoremanager.Draw();//描画

	return 0;
}