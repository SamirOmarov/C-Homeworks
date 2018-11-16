#include <iostream>
#include "Time.h"
#include <ctime>

int main()
{

	Time time1(23, 59, 58);

	std::cout << "time1: ";
	time1.print();

	time1.setHour(27);
	time1.setMinute(66);
	time1.setSecond(108);

	system("pause");
}