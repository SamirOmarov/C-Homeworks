#include "Complex.h"
#include <iostream>


Complex::Complex(double r, double i) {
	real = r;
	imaginary = i;
}

void Complex::Print() {
	std::cout << "real: " << Complex::real << " imaginary: " << Complex::imaginary << std::endl;
}

Complex::~Complex()
{
}
