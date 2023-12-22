// bitField.cpp -- specify bit field in structure
#include <iostream>

struct torgle_register
{
	unsigned int a : 1;
	unsigned int b : 3;
	unsigned int c : 8;
	unsigned int d : 10;
};

int main()
{	
	using namespace std;
	
	unsigned int A = 13;
	unsigned int B = 14;
	unsigned int C = 30;
	unsigned int D = 1200;
	torgle_register tr = { A, B, C, D};

	cout << "tr has 4 unsigned int a,b,c,d. each of them has been assgined A, B, C, and D.\n";

	cout << "A (size of " << sizeof A << "byte)= " << A <<", a (size of 1bit) = " << tr.a << endl;	// will prints out 1
	cout << "B (size of " << sizeof B << "byte)= " << B <<", b (size of 3bit) = " << tr.b << endl;	// will prints out 1
	cout << "C (size of " << sizeof C << "byte)= " << C <<", c (size of 8bit) = " << tr.c << endl;	// will prints out 1
	cout << "D (size of " << sizeof D << "byte)= " << D <<", d (size of 10bit) = " << tr.d << endl;	// will prints out 1
}