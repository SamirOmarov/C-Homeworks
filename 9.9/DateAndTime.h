#pragma once

#include <iostream>

class DateAndTime {
public:
	explicit DateAndTime(unsigned int = 1, unsigned int = 1,
		unsigned int = 2000, unsigned int = 0,
		unsigned int = 0, unsigned int = 0);

	// SET
	void setTime(unsigned int, unsigned int, unsigned int);
	void setDate(unsigned int, unsigned int, unsigned int);

	void tick();  // increment time by 1 second



	void printUniversal();


private:
	static const size_t MONTHS = 12;




	unsigned int month;
	unsigned int day;
	unsigned int year;
	unsigned int hour;
	unsigned int minute;
	unsigned int second;

	void nextDay();  // increment date by 1
};