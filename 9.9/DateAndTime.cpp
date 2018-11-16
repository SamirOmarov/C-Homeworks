#include <iostream>

#include "DateAndTime.h"

DateAndTime::DateAndTime(unsigned int m, unsigned int d, unsigned int y,
	unsigned int hr, unsigned int min, unsigned int sec) {
	setDate(m, d, y);
	setTime(hr, min, sec);
}

void DateAndTime::setDate(unsigned int m, unsigned int d, unsigned int y) {
	if (y > 0) {
		year = y;
	}
	else {
		std::cout << "Year must be a positive number" << std::endl;
	}
	if (m > 0 && m <= 12) {
		month = m;
	}
	else {
		std::cout << "Month must be 1-12" << std::endl;
	}


	if (d > 0 && d <= 31) {
		day = d;
	}
	else {
		std::cout << "Day must be 0-31" << std::endl;
	}
}

void DateAndTime::setTime(unsigned int hr, unsigned int min, unsigned int sec) {
	if (hr <= 23) {
		hour = hr;
	}
	else {
		std::cout << "Hour must be 0-23" << std::endl;
	}
	if (min <= 59) {
		minute = min;
	}
	else {
		std::cout << "Minute must be 0-59" << std::endl;
	}
	if (sec <= 59) {
		second = sec;
	}
	else {
		std::cout << "Second must be 0-59" << std::endl;
	}
}



// increment time by 1 second
void DateAndTime::tick() {
	if (second < 59) {
		second++;
	}
	else {
		second = 0;
		if (minute < 59) {
			minute++;
		}
		else {
			minute = 0;
			if (hour < 23) {
				hour++;
			}
			else {
				hour = 0;
				minute = 0;
				second = 0;

				nextDay();
			}
		}
	}
}

// increment date by 1
void DateAndTime::nextDay() {
	if (day < 31) {
		day++;
	}
	else {
		day = 1;
		if (month < MONTHS) {
			month++;
		}
		else {
			month = 1;
			year++;
		}
	}
}


void DateAndTime::printUniversal() {
	std::cout << day << "/" << month << "/" << year << " " << hour << ":" << minute << ":"
		<< second << std::endl;
}