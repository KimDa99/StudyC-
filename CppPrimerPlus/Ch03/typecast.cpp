// typecast.cpp -- forcing type changes
#include <iostream>
int main()
{
	using namespace std;
	int aulks, bats, coots;

	// the following statement adds the values as double
	// then converts the result to int
	aulks = 19.99 + 11.99;

	// these statements add values as int
	bats = (int)19.99 + (int)11.99;		// old C syntax
	coots = int (19.99) + int (11.99);	// new C++ syntax
	cout << "auks = " << aulks << ", bats = " << bats;
	cout << ", coots = " << coots << endl;

	char ch = 'z';
	cout << "The code for " << ch << " is ";
	cout << int(ch) << endl;									// print as int
	cout << "Yes, the code is " << static_cast<int>(ch) << endl;// using static_cast

	return 0;
}