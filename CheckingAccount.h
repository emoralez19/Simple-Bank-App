#pragma once
#include "Account.h"
class CheckingAccount : public Account
{
public:

	CheckingAccount(double, double);
	void credit(double) override;
	void debit(double) override;

private:
	double fee;
};

