// ptrstr.cpp -- using pointers to strings
#pragma warning(disable : 4996)

#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	char animal[20] = "bear";	// animal holds bear
	const char* bird = "wren";	// bird hols address of string
	char* ps;

	cout << animal << " and ";
	cout << bird << "\n";
//	cout << ps << "\n";			// cause a crash

	cout << "Enter a kind of animal: ";
	cin >> animal;
//	cin >> ps;					// Too horrible a blunder to try; ps doesn't
//								point to allocated space

	ps = animal;
	cout << ps << "!\n";
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << "After using strcpy(): \n";
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;
	delete[] ps;

}