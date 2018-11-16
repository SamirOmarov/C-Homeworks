#pragma once
class Complex
{
private:
	double real;
	double imaginary;

public:
	Complex(double = 1, double = 2);
	~Complex();

	void Print();
	
	Complex operator+(Complex x) const {
		return Complex(real + x.real, imaginary + x.imaginary);
	}
	Complex operator-(Complex x) const {
		return Complex(real - x.real, imaginary - x.imaginary);
	}

};

