#pragma once
#include <iostream>

using namespace std;
class SavingsAccount
{
private:
	static double annualInterestRate;
	double savingsBalance;

public:
	void calculateMonthlyInterest(); 
	double getBalance()const;

	static void modifyInterestRate(double);

	SavingsAccount(double,double);
	~SavingsAccount();

	



};

