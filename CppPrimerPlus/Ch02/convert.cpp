// convert.cpp -- converts stone to pounds
// User defined function that has a return value

#include <iostream>
int stoneTolb(int);

int main()
{
	using namespace std;

	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;

	int pounds = stoneTolb(stone);
	cout << stone << " stones = ";
	cout << pounds << " pounds." << endl;

	return 0;
}

int stoneTolb(int sts)
{
	return 14 * sts;
}