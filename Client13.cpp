#include <iostream>
#include <iomanip>
#include <vector>
#include "CheckingAccount.h"
#include "SavingsAccount.h"
using namespace std;

int main()
{
	SavingsAccount SavingsAccount{ 0, 5 };
	CheckingAccount CheckingAccount{ 40, 3 };
	vector <Account*> Account;

	Account.push_back(&SavingsAccount);
	Account.push_back(&CheckingAccount);

	int choice;

	cout << "Which account would you like to access?\n"
		<< "Select 1 for savings, 2 for checking, and 0 to quit the program" << endl;
	cin >> choice;

	int x;

	while (choice != 0)
	{
		if (choice == 1) // savings account
		{
			cout << "How much money would you like to deposit? $";
			cin >> x;
			Account[0]->credit(x);
			cout << endl;

			cout << "How much money would you like to withdraw? $";
			cin >> x;
			Account[0]->debit(x);
			cout << endl;

			Account[0]->credit(SavingsAccount.calculateInterest());

			cout << "Your new balance is: $" << Account[0]->getBalance() << endl;

		}
		else if (choice == 2) // checking account
		{
			cout << "How much money would you like to deposit? $";
			cin >> x;
			Account[1]->credit(x);
			cout << endl;

			cout << "How much money would you like to withdraw? $";
			cin >> x;
			Account[1]->debit(x);
			cout << endl;

			cout << "Your new balance is: $" << Account[1]->getBalance() << endl;

		}

		cout << "Which account would you like to access?\n"
			<< "Select 1 for savings, 2 for checking, and 0 to quit the program" << endl;
		cin >> choice;

	}

}