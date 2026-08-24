#include<iostream>
#include"20260824_pra4.h"
using namespace std;
//î{Ç…Ç∑ÇÈ
void multiplyArray(int* number, int MAX, int Magnification)
{
	for (int i = 0; i < MAX; i++)
	{
		number[i] = number[i] * Magnification;
	}
}
//îzóÒï\é¶
void printArray(int* number, int MAX) 
{
	for (int i = 0; i < MAX; i++)
	{
		cout << *(number + i) <<endl;
	}
}

//ÉQÅ[ÉÄ
void Game()
{
	//ïœêî
	int number[5] = { 10,20,30,40,50 };
	int Magnification;
	//ïœçXëO
	cout << "ïœçXëO" << endl;
	printArray(number,5);
	//î{ó¶Çì¸óÕ
	cout << "î{ó¶ÇåàÇﬂÇƒÇ≠ÇæÇ≥Ç¢" << endl;
	cin >> Magnification;"\n";
	//î{Ç…Ç∑ÇÈ
	multiplyArray(number, 5, Magnification);
	//ïœçXå„
	printArray(number, 5);
}