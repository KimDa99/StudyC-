// sqrt.cpp -- using sqrt() function

#include <iostream>
#include <cmath>
// #include <math.h> // also works.

int main()
{
	using namespace std;

	double area;

	cout << "Enter the floor area, in m^2, of your home: ";
	cin >> area;

	double side;
	side = sqrt(area);
	cout << "That's the equivalent of a square " << side
		<< " meter to the side. " << endl;
	cout << "That's cool!" << endl;

	return 0;
}