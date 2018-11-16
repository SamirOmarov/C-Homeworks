#include "IntegerSet.h"
#include <iostream>

using namespace std;


IntegerSet::IntegerSet(int array[], int size)
{
	emptySet();
	for (int i = 0; i < size; i++)
	{
		insertElement(array[i]);
	}
}

void IntegerSet::emptySet() {
	for (size_t k = 0; k < 101; k++)
	{
		set[k] = 0; //arrays name is set
	}
}

void IntegerSet::inputSet() {
	int num;
	
	do 
	{
		cout << "Enter an element -1 to STOP): ";
			cin >> num;
		if (num >= 0 && num <= 100) {
			set[num] = 1; //arrays name is set
		}
		else
		{
			//cout << "Error" << endl;
		}
	} while (num != -1);
	cout << "Entry complete\n";

}

void IntegerSet::printSet()const {
	
	bool empty = true;
	for (size_t n = 0; n < 101; n++)
	{
		if (set[n])
		{
			cout << " " << n;
			empty = false;
			
		}
	}
	if (empty)
	{
		cout << "---" << endl;
	}
}//end

IntegerSet IntegerSet::unionOfSets(const IntegerSet &s) {
	IntegerSet temp;
	for (size_t m = 0; m < 101; m++)
	{
		if (set[m] ==1 || s.set[m] ==1)
		{
			temp.set[m] = 1;
		}
	}
	return temp;
}

IntegerSet IntegerSet::intersectionOfSets(const IntegerSet &s) {
	IntegerSet temp;
	for (size_t v = 0; v < 101; v++)
	{
		if (set[v]==1 && s.set[v]==1)
		{
			temp.set[v] = 1;
		}
	}
	return temp;
}

void IntegerSet::insertElement(int e)
{
	if (e>=0 && e<=100)
	{
		set[e] = 1;
	}
	else
	{
		cout << "Error!" << endl;
	}

}
void IntegerSet::deleteElement(int d)
{
	if (d>=0 && d<=100)
	{
		set[d] = 0;
	}
	else
	{
		cout << "Error!" << endl;
	}

}

bool IntegerSet::isEqualTo(const IntegerSet &s) const {
	for (size_t z = 0; z < 101; z++)
	{
		if (set[z] !=s.set[z])
		{
			return false;
		}
		return true; //?
	}
}
