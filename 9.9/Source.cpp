#include "DateAndTime.h"

#include <iostream>
#include <string>
int main() {
	DateAndTime dt(1, 1, 2000, 23, 59, 59);

	dt.printUniversal();

	for (int i = 0; i < 20; ++i) {
		dt.tick();

		dt.printUniversal();
	}
	system("pause");
}