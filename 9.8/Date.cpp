#include "Date.h"

Date::Date(int d, int m, int y)
{
	if (d > 31)
	{
		day = 0;
	}
	else { day = d; }

	if (m > 12)
	{
		month = 0;
	}
	else { month = m; }

	year = y;
}

void Date::print()
{
	cout << day << " " << month << " " << year << "\n";
}

void Date::nextDay()
{
	day++;
	if (day > 31)
	{
		day = 1;
		month++;
	}

	if (month > 12)
	{
		month = 1;
		year++;
	}
}

void Date::setDate(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}