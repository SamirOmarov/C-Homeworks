#pragma once

#include "Package.h"

class OvernightPackage : public Package {
public:
	OvernightPackage(const Person&, const Person&, double, double, double);

	double calculateCost() {
		return Package::getWeight() *
			(Package::getCostPerOunce() + feePerOunce);
	}

	void printDetails();

private:
	double feePerOunce;

	void setFee(double);
};
