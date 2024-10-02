#include <iostream>
using namespace std;

class bankAccount
{
	double balance; //saldo
	std::string owner; //wlasciciel
	std::string currency; //waluta

};

void accountInformation(bankAccount& account)
{
	std::cout << "Informacja o koncie bankowym.\n";
	std::cout << "W³aœciciel: " << account.owner << "\n";
	std::cout << "Saldo: " << account.balance << " " << account.currency << "\n";
}

void depositToAccount(bankAccount& account, double amount)
{
	amount = abs(amount);
	account.balance = account.balance + amount;
}

bool widthdrawalFromAccount(bankAccount& account, double amount)
{
	amount = abs(amount);
	if (account.balance - amount >= 0)
	{
		account.balance = account.balance - amount;
		return true;
	}
	return false;
}

void transferBetweenAccounts(bankAccount& sourceAccount, bankAccount& targetAccount, double amount)
{
	if (widthdrawalFromAccount(sourceAccount, amount) == true)
		depositToAccount(targetAccount, amount);
}

int main()
{
	struct bankAccount
	{
		double balance; // saldo
		std::string owner; //w³aœciciel
		std::string currency; //waluta

	};

	void accountInformation(bankAccount & account)
	{
		std::cout << "Informacja o koncie bankowym.\n";
		std::cout << "W³aœciciel: " << account.owner << "\n";
		std::cout << "Saldo: " << account.balance << " " << account.currency << "\n";
	}

	void depositToAccount(bankAccount & account, double amount)
	{
		amount = abs(amount);
		account.balance = account.balance + amount;
	}

	bool widthdrawalFromAccount(bankAccount & account, double amount)
	{
		amount = abs(amount);
		if (account.balance - amount >= 0)
		{
			account.balance = account.balance - amount;
			return true;
		}
		return false;
	}

}