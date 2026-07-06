#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
#include"20260706_HeaderMain2_iwamoto.h"

//CPUとじゃんけん
int janken(int player, int cpu)
{
	int judge = 0; //勝敗判定用変数
	judge = player - cpu;
	if (player == cpu)
	{
		return 0; //引き分け
	}
	else if (judge == 1 || judge == -2)
	{
		return 1; //プレイヤーの勝ち
	}
	else
	{
		return -1; //CPUの勝ち
	}
}
//経験値をランダムで取得する関数
int getEXP()
{
	return rand() % 15 + 1; //1〜15のランダムな経験値を返す
}

//レベルアップの判定を行う関数
int levelup(int exp, int level)
{
	if (exp >= LevelUpEXP)
	{
		exp -= LevelUpEXP; //経験値を減算
		level++; //レベルアップ
		cout << "レベルアップ！ Lv" << level << "になりました！" << endl;
	}
	return level; //更新されたレベルを返す
}

//入力チェック
int inputCheck(int min, int max)
{
	int input;
	while (true)
	{
		cin >> input;
		if (input < min || input > max)
		{
			cout << "入力が不正です。再度入力してください。" << std::endl;
			cin >> input;
		}
		else
		{
			break;
		}
	}
	return input;
}

void Game()
{
	//変数
	int player, CPU;
	int exp = 0;
	int level = 1;
	int result;
	int CpuCount = 0;
	//ゲームループ
	while (true)
	{
		//レベルと経験値の表示
		cout << "今のレベルは" << level << "です" << endl;
		cout << "今の経験値は" << exp << "です" << "\n";

		//プレイヤーの手の入力
		cout << "0:グー 1:チョキ 2:パー" << endl;
		int player = inputCheck(Min, Max);
		//CPUの手の生成
		CPU = rand() % 3;
		//勝敗判定
		result = janken(player, CPU);
		if(result == 0)
		{ 
			cout << "引き分けです。" << endl;
		}
		else if (result == 1)
		{
			cout << "あなたの勝ちです！" << endl;
			int gainedEXP = getEXP();
			exp += gainedEXP;
			cout << "経験値を" << gainedEXP << "獲得しました！" << endl;
			level = levelup(exp, level);
		}
		else
		{
			cout << "CPUの勝ちです。" << endl;
			CpuCount++;
		}

		if (level == 5)
		{
			cout << "プレイヤーの勝ちです" << endl;
		}
		else if (CpuCount == 10)
		{
			cout << "CPUの勝ちです" << endl;
		}
	}
}
