#include "Time.h"

#include <ctime>

#include <iostream>


Time::Time() {
	// Initialize to the current time
	time_t currenttime;
	struct tm timeinfo;

	time(&currenttime);
	localtime_s(&timeinfo, &currenttime); //convert to local time

	hour = timeinfo.tm_hour;
	minute = timeinfo.tm_min;
	second = timeinfo.tm_sec;
}
Time::Time(int hour, int minute, int second) { setTime(hour, minute, second); }
// SET
// set new Time value
void Time::setTime(int h, int m, int s) {
	setHour(h);
	setMinute(m);
	setSecond(s);
}
// set hours
void Time::setHour(int h) {
	if (h >= 0 && h < 24) {
		hour = h;
	}
	else {
		std::cout << "hour must be 0-23" << std::endl;
	}
}
// set minutes
void Time::setMinute(int m) {
	if (m >= 0 && m < 60) {
		minute = m;
	}
	else {
		std::cout << "minute must be 0-59" << std::endl;
	}
}
// set seconds
void Time::setSecond(int s) {
	if (s >= 0 && s < 60) {
		second = s;
	}
	else {
		std::cout << "seconds must be 0-59" << std::endl;
	}
}
// GET
int Time::getHour() { return hour; }
int Time::getMinute() { return minute; }
int Time::getSecond() { return second; }


void Time::tick() {
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
			}
		}
	}
}


void Time::print() {
	std::cout << hour << ":" << minute << ":" << second << std::endl;
}





