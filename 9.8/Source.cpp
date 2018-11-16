#include "Date.h"

int main()
{
	Date d1, d2;
	int d, m, y;

	d1.print();

	for (int i = 0; i < 20; i++)
	{
		d1.nextDay();
		d1.print();
	}

	cout << "\n\n\nDate enter: ";

	cin >> d >> m >> y;

	d2.setDate(d, m, y);

	for (int i = 0; i < 20; i++)
	{
		d2.nextDay();
		d2.print();
	}

	cout << "\n\n";
	system("pause");

}