#include <iostream>
#include "SavingsAccount.h"



int main()
{
	SavingsAccount saver1(2000,0.03f);
	SavingsAccount saver2(3000,0.03f);


	std::cout << "Interest rate : 3%" << std::endl;

	std::cout << "saver1 initial balance: " << saver1.getBalance() << std::endl;
	saver1.calculateMonthlyInterest();
	std::cout << "after calculateInterestRate " << saver1.getBalance() << std::endl;
	std::cout << "saver2 initial balance: " << saver2.getBalance() << std::endl;
	saver2.calculateMonthlyInterest();
	std::cout << "after calculateInterestRate " << saver2.getBalance() << std::endl;

	SavingsAccount::modifyInterestRate(0.04f);

	std::cout << "\nInterest rate at 4%" << std::endl;

	std::cout << "saver1 initial balance: " << saver1.getBalance() << std::endl;
	saver1.calculateMonthlyInterest();
	std::cout << "after calculateInterestRate " << saver1.getBalance() << std::endl;
	std::cout << "saver2 initial balance: " << saver2.getBalance() << std::endl;
	saver2.calculateMonthlyInterest();
	std::cout << "after calculateInterestRate " << saver2.getBalance() << std::endl;


	system("pause");
}