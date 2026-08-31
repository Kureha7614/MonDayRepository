#pragma once
#include<string>
#include<cstring>

class BankAccount
{
private:
    std::string accountHolder; // å˚ç¿ñºã`êl
    double balance;            // écçÇ

public:
    BankAccount(const std::string & holder, double initialBalance)
        : accountHolder(holder), balance(initialBalance)
    {

    };
    double getBalance() const;
    void deposit(double amount);
    void withdraw(double amount);
    void displayAccountInfo() const;
};