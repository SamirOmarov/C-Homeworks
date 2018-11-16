#include <iostream>
#include "IntegerSet.h" // IntegerSet class definition

using namespace std;

int main()

{
		IntegerSet a;
		IntegerSet b;
		IntegerSet c;
		IntegerSet d;
		
		cout << "Enter set A:\n";
		a.inputSet();

		cout << "\nEnter set B:\n";
		b.inputSet();

		c = a.unionOfSets(b);
		d = a.intersectionOfSets(b);

		cout << "\nUnion of A and B is:\n";
		c.printSet();
		cout << endl;

		cout << "Intersection of A and B is:\n";
		d.printSet();
		cout << endl;

		if (a.isEqualTo(b)) {
			cout << "Set A is equal to set B\n";
		}
		else {
			cout << "Set A is not equal to set B\n";
		}

		cout << "\nInserting 13 into set A...\n";
		a.insertElement(13);

		cout << "Set A is now:\n";
		a.printSet();

		cout << "\nDeleting 13 from set A...\n";
		a.deleteElement(13);

		cout << "Set A is now:\n";
		a.printSet();

		
		int intArray[10] = { 25,24,25,26,28,-8,9,88,9,105 };
		IntegerSet e(intArray, 10);
		e.printSet();

		system("pause");

		}