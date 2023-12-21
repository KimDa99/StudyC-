//arrayone.cpp --- small arrays of integers
#include<iostream>
int main()
{
	using namespace std;
	int yams[3];	// creates array with three elements
	yams[0] = 7;	// assign values to each elements
	yams[1] = 8;
	yams[2] = 6;

	int yamcosts[3] = { 20, 30, 5 };	// create and initialize array

	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "Package with " << yams[1] << " yams costs ";
	cout << yamcosts[1] << "per yams. \n";
	int total = yamcosts[0] * yams[0] + yamcosts[1] * yams[1] + yamcosts[2] * yams[2];
	cout << "the total yam expense is " << total << "cents. \n";

	cout << "\nSize of yams array = " << sizeof yams;
	cout << " bytes.\n";
	cout << "Size of one element = " << sizeof yams[0];
	cout << " bytes.\n";

	return 0;
}