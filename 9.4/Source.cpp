#include <iostream>
#include "Time.h"
#include <ctime>

int main()
{
	Time time1;
	Time time2(23, 59, 58);

	std::cout << "time1: ";
	time1.print();

	std::cout << "\n\ntime2: ";
	time2.print();
	std::cout << "\n\ntick function (seconds increments by 1 but show by 10) : ";
	for (int i = 0; i < 100; ++i) {
		time2.tick();

		if (i % 10 == 0) {
			time2.print();

			std::cout << " ";

			std::cout << std::endl;
		}
	}

	system("pause"); 
}
