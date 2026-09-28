#pragma once
#include "config.h"
class CPU
{
private:
	int  CpuScore;
public:
	//コンストラクタ
	CPU();
	~CPU();

	//得点を加算
	void addScore(int add);

	//CPUが自動的にカードを引くか引かないかを返す
	bool isDraw(int PlayerScore) const
	{
		//CPUの得点が15以下の場合trueを返す
		if (CpuScore <= CPU_DRAW_SCORE)
		{
			return true;
		}
		//CPUの得点がぷれいやーの得点より小さい場合trueを返す
		else if (CpuScore < PlayerScore)
		{
			return true;
		}
		//CPUの得点が21の場合falseを返す
		else if (CpuScore == WIN_SCORE)
		{
			return false;
		}
		//CPUの得点がぷれいやー以上の場合falseを返す
		else
		{
			return false;
		}
	}
	
	

	//CPUの得点が21の場合trueを返す
	bool isTwentyOne() const
	{
		return CpuScore == WIN_SCORE;
	}

	//CPUの得点が22以上の場合trueを返す
	bool isBurst() const
	{
		return CpuScore >= BURST_SCORE;
	}

	//CPUの得点を返す
	int getScore() const
	{
		return CpuScore;
	}
};

