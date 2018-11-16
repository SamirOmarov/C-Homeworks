#include <iostream>

#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"


int main() {
	OvernightPackage op(Person("Samir", "Omarov", "Yildiz Street", "Mecidiyekoy",
		"Istanbul", "TR7777"),
		Person("Kal", "Ra", "CatStreet", "Zeytinburnu",
			"Istanbul", "TR8888"),
		12.0f, 3.0f, 1.0f);

	TwoDayPackage tdp(
		Person("Samir", "Omarov", " Street", " Place", "Snd", "TR7777"),
		Person("Kal", "Ra", "Street", "Recip Town", "Rpt",
			"TR8888"),
		12.0f, 3.0f, 1.0f);

	std::cout << "Overnight Package:\n";
	op.printDetails();

	std::cout << "\n\nTwo day Package:\n";
	tdp.printDetails();

	std::cout << std::endl;

	system("pause");
}
