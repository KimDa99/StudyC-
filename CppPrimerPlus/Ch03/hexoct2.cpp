// hexoct2.cpp -- display values in hex and oct
#include<iostream>
int main()
{
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cuts a striking figures!" << endl;
	cout << "chest = " << chest << " (decimal for 42)" << endl;
	cout << hex;		// manipulator for changing number base into Hex
	cout << "waist = " << waist << " (Hex for 42)" << endl;
	cout << oct;		// manipulator for changing number base into oct
	cout << "inseam = " << inseam << " (Oct for 42)" << endl;

	return 0;
}