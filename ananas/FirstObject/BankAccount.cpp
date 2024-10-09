#include <iostream>
using namespace std;
#include "BankAccount.h";

void BankAccount::AccountInformation()
{
	cout << "Informacja o koncie bankowym.\n";
	cout << "W³aœciciel: " << owner << "\n";
	cout << "Saldo: " << balance << " " << currency << "\n";
}

void BankAccount::DepositToAccount(double amount)
{
	amount = abs(amount);
	balance = balance + amount;
}

bool BankAccount::WidthdrawalFromAccount(double amount)
{
	amount = abs(amount);
	if (balance - amount >= 0)
	{
		balance = balance - amount;
		return true;
	}
	return false;
}

void BankAccount::transferBetweenAccounts(BankAccount& targetAccount, double amount)
{
	if (WidthdrawalFromAccount(amount) == true)
		targetAccount.DepositToAccount(amount);
}

