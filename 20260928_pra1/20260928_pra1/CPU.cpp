#include "CPU.h"

CPU::CPU()
{
	//初期化
	CpuScore = INIT_SCORE;
}

CPU::~CPU()
{
}

void CPU::addScore(int add)
{
	CpuScore += add;
}
