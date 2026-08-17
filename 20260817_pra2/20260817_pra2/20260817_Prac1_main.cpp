#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260817_Prac1_header.h"

using namespace std;

//定数
//最小値
const int PITING_MIN = 0;
//最大値
const int PITING_MAX = 3;
//確率の計算値
const int PROBABILITY = 4;
//ストライクの最大値
const int STRIKE_COUNT = 3;
//ボールの最大値
const int BALL_COUNT = 4;
//アウトの最大値   
const int OUT_COUNT = 3;
//ヒットの最大値
const int HIT_COUNT = 4;

int main(void)
{
    int ply, emy;
    //確率
    int prod;
    //ストライクカウント
    int Strike = 0;
	//ボールカウント
    int Ball = 0;
	//アウトカウント
    int Out = 0;
	//ヒットカウント
    int Hit = 0;

    srand((unsigned int)time(NULL));

    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;
    //ゲーム開始
	//OUTが3つになるか、HITが4つになるまで繰り返す
    while (Out < OUT_COUNT && Hit < HIT_COUNT)
    {
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート "
            << "1:カーブ "
            << "2:スライダー "
            << "3:シンカー"
            << endl;
		//入力値のチェック
        while (true)
        {
            cin >> ply;

            if (PITING_MIN > ply || PITING_MAX < ply)
            {
                cout << "入力に誤りがあります。"
                    << "再度入力してください。"
                    << endl;
            }
            else
            {
                break;
            }
        }

        
        PitingType(ply);

		//乱数でCPUの打つ場所を決定
        emy = rand() % PROBABILITY;

		//乱数でストライクかボールかを決定
        prod = rand() % PROBABILITY;
		//プレイヤーとCPUの入力値が違う場合
        if (ply != emy)
        {
			//確率でストライクかボールかを決定
            if (prod == 0)
            {
                cout << "ボール！" << endl;
                Ball++;
            }
            else
            {
                cout << "ストライク！！" << endl;
                Strike++;
            }
        }
		//プレイヤーとCPUの入力値が同じ場合
        else
        {
			//ストライクとボールのカウントをリセット
            Strike = 0;
            Ball = 0;
			//確率でアウトかヒットかを決定
            if (prod == 1)
            {
                cout << "OUT!!!" << endl;
                Out++;
            }
            else
            {
                cout << "HIT!!" << endl;
                Hit++;
            }
        }
		//ストライクかボールのカウントが最大値に達した場合
        if (Strike >= STRIKE_COUNT || Ball >= BALL_COUNT)
        {
            if (Strike >= STRIKE_COUNT)
            {
                Out++;
            }
            else
            {
                Hit++;
            }
			//ストライクとボールのカウントをリセット
            Strike = 0;
            Ball = 0;
        }
		//ゲームの状態を表示
        cout << "B:" << Ball << endl;
        cout << "S:" << Strike << endl;
        cout << "O:" << Out << endl;
        cout << "Runner:" << Hit << endl;

    } 

    
    Result(Out);

    return 0;
}