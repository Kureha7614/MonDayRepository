#include <iostream>
using namespace std;

int main(void) 
{
    //変数
    int a = 0;
    //pにaのアドレスを入れる
    int* p = &a;
    //aの値（0）を表示
    cout << "aの初期値: " << a << endl;
    //pに10を代入
    *p = 10;
    //aの値（10）を表示

    cout << "aの変更後の値: " << a << endl;

    return 0;
}