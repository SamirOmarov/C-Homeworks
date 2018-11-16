#include <iostream>

#include "TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(const Person& snd, const Person& rcp, double wgt,double cpo, double fee)
	: Package(snd, rcp, wgt, cpo) {
	setFee(fee);
}

void TwoDayPackage::setFee(double fee) {
	if (fee >= 0.0f) {
		flatFee = fee;
	}
	else {
		cout << "Flat fee must be positive" << endl;
	}
}

void TwoDayPackage::printDetails() {
	Package::printDetails();

	std::cout << "\n\nTotal Cost: " << calculateCost();
}
