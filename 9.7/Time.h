#pragma once
class Time {
private:
	int hour;
	int minute;
	int second;

public:
	
	Time(int, int, int);

	

	// SET
	void setTime(int, int, int);
	void setHour(int);
	void setMinute(int);
	void setSecond(int);

	// GET
	int getHour();
	int getMinute();
	int getSecond();

	void print();

};