#include<string>
#include<iostream>
#include"20280831_Prac1_iwamoto.h"
using namespace std;


double BankAccount::getBalance() const
{
    return balance;
}

void BankAccount:: deposit(double amount)
{
    if (amount > 0) {
        balance += amount;
        cout << "Deposited: " << amount << "\n";
    }
    else {
        cout << "Invalid deposit amount.\n";
    }
}

void BankAccount::withdraw(double amount)
{
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        cout << "Withdrawn: " << amount << "\n";
    }
    else
    {
        cout << "Invalid withdraw amount or insufficient funds.\n";
    }
}

void BankAccount::displayAccountInfo() const
{
    cout << "Account Holder: " << accountHolder << "\n"
        << "Current Balance: " << balance << "\n";
}