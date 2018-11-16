#pragma once

#include "Package.h"

class TwoDayPackage : public Package {
public:
	TwoDayPackage(const Person&, const Person&, double, double, double);

	double calculateCost() { return Package::calculateCost() + flatFee; }

	void printDetails();

private:
	double flatFee;

	void setFee(double);
};
