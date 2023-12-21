// carrot.cpp -- food processing program
// uses and displays a variable

#include <iostream>

int main()
{
	using namespace std;

	int carrots; // declare an interger variable

	carrots = 25; // assing a value to the variable
	cout << "I have ";
	cout << carrots; // diaplay the value of variable
	cout << " carrots";
	cout << endl;

	carrots -= 1; // modify the variable
	cout << "Crunch, crunch. Now I have " << carrots << " carrots" << endl;

	return 0;
}