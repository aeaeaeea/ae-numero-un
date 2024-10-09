#pragma once
#include <iostream>
using namespace std;

class BankAccount
{
public:
	double balance; //saldo
	string owner; //wlasciciel
	string currency; //waluta

	void AccountInformation();

	void DepositToAccount(double amount);

	bool WidthdrawalFromAccount(double amount);

	void transferBetweenAccounts(BankAccount& targetAccount, double amount);
};