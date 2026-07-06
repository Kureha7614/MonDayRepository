#pragma once

const int Max = 2;
const int Min = 0;
const int LevelUpEXP = 20;
const int MaxLevel = 5;
const int MaxEXP = 15;
const int MinEXP = 1;
const int CpuWin = 10;

//プロトタイプ宣言
int Game();
int janken(player,cpu);
int getEXP();
int levelup();
int inputCheck(min,max);
void Game();