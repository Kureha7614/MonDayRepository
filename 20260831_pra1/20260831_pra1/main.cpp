#include <iostream>
#include <string>
#include"20280831_Prac1_iwamoto.h"
using namespace std;



int main() 
{
    BankAccount account("Alice", 5000.0);

    account.displayAccountInfo();

    account.deposit(1000.0);
    account.withdraw(2000.0);
    account.withdraw(5000.0); // écçÇïsë´Ç≈é∏îs

    account.displayAccountInfo();

    return 0;
}