#include "CPU.h"

CPU::CPU()
{
	//‰Šú‰»
	CpuScore = INIT_SCORE;
}

CPU::~CPU()
{
}
//“¾“_‚ğ‰ÁZ
void CPU::addScore(int add)
{
	CpuScore += add;
}
