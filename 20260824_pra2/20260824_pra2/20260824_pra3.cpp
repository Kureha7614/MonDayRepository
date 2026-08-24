#include<iostream>
using namespace std;

int main(void)
{
	//’è”
	const int MIN = 0;
	const int MAX = 5;
	//•Ï”
	int numbers[5] = { 35,82,17,96,54 };
	int* p = numbers;
	int max;
	max = *p;
	//numbers‚Ì’l‚ğ”äŠr‚·‚é
	for (int i = MIN; i < MAX; i++)
	{
		if (*p > max)
		{
			max = *p;
		}
		p++;
	}
	//ˆê”Ô‘å‚«‚¢”‚ğ•\¦
	cout << "MAX‚Í" << max << "‚Å‚·" << endl;

	return 0;
}