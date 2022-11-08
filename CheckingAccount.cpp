#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double balance, double dRate) : Account::Account(balance)
{
	fee = dRate;
}

void CheckingAccount::credit(double amounts)
{
	Account::credit(amounts - fee);
}

void CheckingAccount::debit(double amounts)
{
	Account::debit(amounts + fee);
}
