#include "Rational.h"
#include <iostream>

using namespace std;

Rational::Rational(int n, int d):num(n), den(d)
{
	Reduce();
}

void Rational::Reduce()
{
	int high;

	if (num > den)
	{
		high = num;
	}
	else
	{
		high = den;
	}

	// Finding a common divisor
	int divisor = 2;

	while (divisor <= high)
	{
		if (num%divisor == 0 && den%divisor == 0)
		{
			num /= divisor;
			den /= divisor;
			divisor = 2;
		}
		else
		{
			divisor++;
		}
	}

	if (den < 0)
	{
		den *= -1;
		num *= -1;
	}
}

void Rational::print()
{
	cout << num << "/" << den << endl;
}

void Rational::floatPrint()
{
	double f = (double)num / den;
	cout <<  f << endl;
}

Rational::~Rational()
{
}
