#include <iostream>
using namespace std;

#include "20260817_Prac1_header.h"
//ピッチャーの投球を表示する関数
void PitingType(int piting)
{
    
    switch (piting)
    {
	case 0:
		cout << "ストレートを投げました" << endl;//０の場合はストレートを投げましたと表示
		break;
	case 1:
		cout << "カーブを投げました" << endl;//１の場合はカーブを投げましたと表示
		break;
	case 2:
		cout << "スライダーを投げました" << endl;//２の場合はスライダーを投げましたと表示
		break;
	case 3:
		cout << "シンカーを投げました" << endl;//３の場合はシンカーを投げましたと表示
		break;

    }
}

//勝敗を表示する関数
void Result(int out)
{
	//OUTが3つ以上の場合はプレイヤーの勝利
    if (out >= 3)
    {
        cout << "PLAYER WINNER!!" << endl;
    }
	//HITが4つ以上ならCPUの勝利
    else
    {
        cout << "CPU WINNER!!" << endl;
    }
}