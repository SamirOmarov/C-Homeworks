

#include "OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage(const Person& snd, const Person& rcp,
	double wgt, double cpo, double fpo)
	: Package(snd, rcp, wgt, cpo) {
	setFee(fpo);
}

void OvernightPackage::setFee(double fpo) {
	if (fpo >= 0.0f) {
		feePerOunce = fpo;
	}
	else {
		cout << "Fee per ounce must be positive" << endl;
	}
}
// print details
void OvernightPackage::printDetails() {
	Package::printDetails();

	std::cout << "\n\nTotal Cost: " << calculateCost();
}
