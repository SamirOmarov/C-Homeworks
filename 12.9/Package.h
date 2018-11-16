#pragma once

#include <iostream>
#include <string>

using namespace std;

struct Person {
	string firstName;
	string lastName;
	string address;
	string city;
	string state;
	string zipCode;

	struct Person(const string& fn, const string& ln, const string& add,
		const string& ct, const string& st, const string& zc) :
		firstName(fn),
		lastName(ln),
		address(add),
		city(ct),
		state(st),
		zipCode(zc) {}
};


class Package {
public:
	Package(const struct Person&, const struct Person&, double, double);

	double calculateCost() { return getWeight() * getCostPerOunce(); }

	double getWeight() const { return weight; }
	double getCostPerOunce() const { return costPerOunce; }

	void printDetails() const;

private:
	
	 Person sender;
	 Person reciver;

	double weight;
	double costPerOunce;

	void setWeight(double);
	void setCostPerOunce(double);
};
