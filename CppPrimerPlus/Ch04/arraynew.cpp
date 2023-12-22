// arraynew.cpp -- using the new operator for arrays
#include <iostream>

int main()
{
	using namespace std;
	double* p3 = new double[3];					// space for 3 double
	p3[0] = 0.2;								// treat p3 like an array name
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3 address: " << p3 << endl;
	cout << "p3[0] address: " << &p3[0] << endl;
	cout << "p3[1] address: " << &p3[1] << endl;
	cout << "p3[2] address: " << &p3[2] << endl;

	cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 + 1;								// increment the pointer
	cout << "Now p3[0] is " << p3[0] << " and ";
	cout << "p3[1] is " << p3[1] << ".\n";		// point back to beginning
	p3 = p3 - 1;
	delete[] p3;								// free the memory of array p3

	return 0;
}