#include "CPU.h"

CPU::CPU()
{
	//初期化
	CpuScore = INIT_SCORE;
}

CPU::~CPU()
{
}
//得点を加算
void CPU::addScore(int add)
{
	CpuScore += add;
}
