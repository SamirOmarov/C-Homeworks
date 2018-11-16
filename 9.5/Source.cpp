#include <iostream>
#include "Complex.h"

int main() {
	Complex c1;
	Complex c2(123, 456);

	Complex c3 = (c1 + c2); // operators initialized
	Complex c4 = (c3 - c2);
	
	c1.Print();
	c2.Print();
	c3.Print();
	c4.Print();

	system("pause");
}
