#include "SavingsAccount.h"
#include <iostream>


double SavingsAccount::annualInterestRate = 0.0f;

void SavingsAccount::modifyInterestRate(double a)
{
	if (a >=0)
	{
		annualInterestRate = a;
	}
	else
	{
		annualInterestRate = 0;
	}
	
}
SavingsAccount::SavingsAccount(double balance, double rate) :savingsBalance(balance)
{
	modifyInterestRate(rate);
}

void SavingsAccount::calculateMonthlyInterest() {
	savingsBalance += ((savingsBalance * annualInterestRate) / 12.0f);
}

double SavingsAccount::getBalance()const {
	return savingsBalance;
}


SavingsAccount::~SavingsAccount()
{
}
