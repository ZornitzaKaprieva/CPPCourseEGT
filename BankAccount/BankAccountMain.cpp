#include "Account.h"

int main()
{
	Account account1(1500);
	cout << account1.getBalance() << endl;
	account1.debit(100);
	cout << account1.getBalance() << endl;
	account1.credit(200);
	cout << account1.getBalance() << endl;
}