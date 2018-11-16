#include <iostream>
#include "Rational.h"

#define LOG(x) cout << (x);

using namespace std;

int main()
{
	Rational test1; // (1/2)
	Rational test2(10, 16); 
	
	Rational testSum = test1 + test2;
	Rational testMultiply = test1 * test2;
	Rational testDivide = test1 / test2;

	LOG("Summational test *** Rational :");
	testSum.print();
	LOG("Float :")
	testSum.floatPrint();

	LOG("Multiplication test *** Rational :");
	testMultiply.print();
	LOG("Float :")
	testMultiply.floatPrint();

	LOG("Divide test *** Rational :");
	testDivide.print();
	LOG("Float :");
	testDivide.floatPrint();


	system("pause");

}