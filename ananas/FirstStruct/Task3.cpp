#include <iostream>
using namespace std;

struct bankAccount
{
	double balance;
	string owner;
	string currency;
};

void AccountInfo(bankAccount& account)
{
	cout << "\nowner: " << account.owner;
	cout << "\nyour balance: " << account.balance;
	cout << "\ncurrency: " << account.currency;
}

void depositIntoAccount(bankAccount& account, double amount)
{
	amount = abs(amount);
	account.balance = account.balance + amount;
}

void withdrawFromIntoAccount(bankAccount& account, double amount)
{
	amount = abs(amount);
	account.balance = account.balance + amount;
}

void task3()
{
	bankAccount firstAccount;
	firstAccount.owner = "jan nowak";
	firstAccount.balance = 5000;
	firstAccount.currency = "pln";

	depositIntoAccount(firstAccount, 12.99);
	AccountInfo(firstAccount);

	withdrawFromIntoAccount(firstAccount, -12.99);
	AccountInfo(firstAccount);
}