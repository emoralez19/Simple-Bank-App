#include "SavingsAccount.h"
#include "Account.h"
#include <iostream>
#include <stdexcept>
using namespace std;

SavingsAccount::SavingsAccount(double balance, double iRate) : Account::Account(balance)
{
	if (iRate < 0.0)
	{
		throw invalid_argument("Invalid amount");
	}
	else
	{
		interestRate = iRate;
	}
}

double SavingsAccount::calculateInterest()
{
	return getBalance() * interestRate / 100;
}
