#include <iostream>
using namespace std;

class BankAccount
{
public:
	double balance; //saldo
	string owner; //wlasciciel
	string currency; //waluta

	void AccountInformation()
	{
		cout << "Informacja o koncie bankowym.\n";
		cout << "W³aœciciel: " << owner << "\n";
		cout << "Saldo: " << balance << " " << currency << "\n";
	}

	void DepositToAccount(double amount)
	{
		amount = abs(amount);
		balance = balance + amount;
	}
};

bool widthdrawalFromAccount(BankAccount& account, double amount)
{
	amount = abs(amount);
	if (account.balance - amount >= 0)
	{
		account.balance = account.balance - amount;
		return true;
	}
	return false;
}

void transferBetweenAccounts(BankAccount& sourceAccount, BankAccount& targetAccount, double amount)
{
	if (widthdrawalFromAccount(sourceAccount, amount) == true)
		targetAccount.DepositToAccount(amount);
}

int main()
{
	BankAccount firstAccount;
	firstAccount.balance = 10000;
	firstAccount.currency = "z³";
	firstAccount.owner = "Jan Kowalski";

	firstAccount.AccountInformation();
	//accountInformation(firstAccount);

	BankAccount secondAccount;
	secondAccount.balance = 15000;
	secondAccount.currency = "z³";
	secondAccount.owner = "Ewa Nowak";

	secondAccount.AccountInformation();
	//accountInformation(secondAccount);

	firstAccount.DepositToAccount(-14.50);
	firstAccount.AccountInformation();

	widthdrawalFromAccount(firstAccount, 14.50);
	firstAccount.AccountInformation();

	transferBetweenAccounts(secondAccount, firstAccount, 1000);
	firstAccount.AccountInformation();
	secondAccount.AccountInformation();
}