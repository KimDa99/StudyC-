//strings.cpp -- storing strings in an array
#include <iostream>
#include <cstring>	// for the strlen() func

int main()
{
	using namespace std;
	const int size = 15;
	char name1[size];				// empty array
	char name2[size] = "C++owboy";	// initialized array

	cout << "Howdy! I am " << name2;
	cout << "! What's your name?\n";
	cin >> name1;

	cout << "well " << name1 << ", your name has ";
	cout << strlen(name1) << " letters and is stored\n";
	cout << "in an array of " << sizeof name1 << " bytes\n";
	cout << "Your initial is " << name1[0] << ".\n";
	name2[3] = '\0';
	cout << "Here are the first 3 character of my name: ";
	cout << name2 << endl;

	return 0;
}