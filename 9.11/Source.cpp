#include <iostream>

#include "Rectangle.h"

int main() {
	Rectangle r1(18, 18);

	std::cout << "Area: " << r1.getArea()
		<< "\nPerimeter: " << r1.getPerimeter() << std::endl;

	system("pause");
}
