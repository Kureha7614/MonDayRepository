#include<iostream>
#include"MagicalGirl.h"
#include"Homura.h"
#include"Madoka.h"
using namespace std;

int main(void)
{
	MagicalGirl* magicalgirls[2];
	Madoka madoka;
	Homura homura;
	magicalgirls[0] = &madoka;
	magicalgirls[1] = &homura;

	for(int i = 0;i < 2;i++)
	{
		magicalgirls[i]->Fight();
		magicalgirls[i]->ShowProfile();
	}
	return 0;
}