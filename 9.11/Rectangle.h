#pragma once

class Rectangle {
public:
	 Rectangle(double = 1.0f, double = 1.0f);

	// SET
	void setLength(double);
	void setWidth(double);

	// GET
	double getLength() { return length; }
	double getWidth() { return width; }

	double getPerimeter();
	double getArea();

private:
	double length;
	double width;
};
