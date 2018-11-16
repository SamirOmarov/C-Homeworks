#pragma once

class Rational
{
private:
	int num;
	int den;

public:

	Rational operator+(Rational x){
		int numerator = (num * x.den) + (x.num * den);
		int denominator = den * x.den;
		Rational ans(numerator, denominator);
		return ans;
		
	}

	Rational operator-(Rational x) const {
		int numerator = (num * x.den) - (x.num * den);
		int denominator = den * x.den;
		Rational ans(numerator, denominator);
		return ans;
	}

	Rational operator*(Rational x) const {
		return Rational(num * x.num, den * x.den);
	}

	Rational operator/(Rational x) const {
		return Rational(num * x.den, den  *x.num);
	}

	void Reduce();
	
	void print();
	void floatPrint();

	Rational(int = 1 , int = 2);
	~Rational();
};

