#pragma once
const int Max = 2;
const int Min = 1;
const int PlayerMaxHp = 100;
const int HealAmount = 20;

//関数のプロトタイプ宣言
int InputChoise(int min, int max);
void Heal(int& Hp);
void Game();
