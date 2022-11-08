#pragma once
//#include <stdexcept>
//#include <iostream>


class Account
{
public:
	Account(double bal = 0.0);
	virtual void credit(double);
	virtual void debit(double);
	double getBalance();

private:
	double balance;
};

