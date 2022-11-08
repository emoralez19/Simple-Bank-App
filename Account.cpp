#include <stdexcept>
#include <iostream>
#include "Account.h"
using namespace std;

Account::Account(double bal)
{
	if (bal >= 0.0)
	{
		balance = bal;
	}
	else
	{
		balance = 0.0;
		throw invalid_argument("Invalid value");
	}
}


void Account::credit(double credit)
{
	if (credit >= 0.0)
	{
		balance += balance + credit;
	}
	else
	{
		cout << "This is an invalid value\n";
	}
}

void Account::debit(double input)
{
	if (input <= balance)
	{
		balance = balance - input;
	}
	else
	{
		cout << "You have exceeded your account balance\n";
	}
}

double Account::getBalance()
{
	return balance;
}
