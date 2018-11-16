#pragma once

class IntegerSet
{
private:
	int set[101];
public:
	
		IntegerSet()
	{
			emptySet(); 
	} 
		IntegerSet(int[], int); // constructor 

		IntegerSet unionOfSets(const IntegerSet&);

		IntegerSet intersectionOfSets(const IntegerSet&);

		void emptySet(); 

		void inputSet(); 

		void insertElement(int);
		void deleteElement(int);
	
		void printSet() const;
	
		bool isEqualTo(const IntegerSet&) const;


};

