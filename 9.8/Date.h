#pragma once
#include <iostream>
using namespace std;

class Date
{
private:
	int month;
	int day;
	int year;

public:
	Date(int = 1, int = 1, int = 2018);

	void setDate(int, int, int);
	void print();
	void nextDay();
};