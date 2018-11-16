#include "Rectangle.h"
#include <iostream>


Rectangle::Rectangle(double l, double w) {
	setLength(l);
	setWidth(w);
}

// SET
void Rectangle::setLength(double l) {
	if (l > 0.0f && l < 20.0f) {
		length = l;
	}
	else {
		std::cout << "Length must be > 0.0 && < 20.0" << std::endl;
	}
}

void Rectangle::setWidth(double w) {
	if (w > 0.0f && w < 20.0f) {
		width = w;
	}
	else {
		std::cout << "Width must be > 0.0 && < 20.0" << std::endl;
	}
}

// GET
double Rectangle::getPerimeter() { return ((2 * length) + (2 * width)); }
double Rectangle::getArea() { return length * width; }
