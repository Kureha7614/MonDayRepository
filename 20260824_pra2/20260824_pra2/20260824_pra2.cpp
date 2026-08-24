#include<iostream>
using namespace std;

int main(void)
{
	//定数
	const int MIN = 0;
	const int MAX = 5;

	//変数
	int numbers[5] = { 10,20,30,40,50, };
	//pにnumbersのアドレスを代入
	int* p = numbers;
	//10から表示する
	for (int i = MIN; i < MAX; i++)
	{
		cout << "今の数字は" << *p << "です\n" << endl;
		p++;
	}
	return 0;
}