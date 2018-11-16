#include <iostream>


#include "Package.h"

using namespace std;

Package::Package(const struct Person& snd, const struct Person& rcp, double w, double cpo):
	sender(snd), reciver(rcp) {
	setWeight(w);
	setCostPerOunce(cpo);
}
// setters
void Package::setWeight(double w) {
	if (w > 0.0f) {
		weight = w;
	}
	else {
		cout << "Weight must be a positive value." << endl;
	}
}
void Package::setCostPerOunce(double cpo) {
	if (cpo > 0.0f) {
		costPerOunce = cpo;
	}
	else {
		cout << "Cost Per Ounce must be a positive value." << endl;
	}
}
// print package details
void Package::printDetails() const {
	std::cout << "****** SENDER ******\n"
		<< sender.firstName << ' ' << sender.lastName << "\n"
		<< sender.address << "\n"
		<< sender.city << "\n"
		<< sender.state << "\n"
		<< sender.zipCode << "\n****** RECIPIENT *******\n"
		<< reciver.firstName << ' ' << reciver.lastName << "\n"
		<< reciver.address << "\n"
		<< reciver.city << "\n"
		<< reciver.state << "\n"
		<< reciver.zipCode;
}
