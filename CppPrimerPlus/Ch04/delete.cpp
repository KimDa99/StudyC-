// delete.cpp -- using the delete operator
#include <iostream>
#include <cstring>
using namespace std;

char* getname(void);

int main()
{
	char* name;
	
	name = getname();
	cout << name << " at " << (int*)name << endl;
	delete[] name;							// memory freed

	name = getname();
	cout << name << " at " << (int*)name << endl;
	delete[] name;

	return 0;
}

char* getname()								// return pointer to new string
{
	char temp[80];
	cout << "Enter last name: ";
	cin >> temp;
	char* pn = new char[ strlen(temp) +1 ];	// chunk of memory sized to fi the input string 
	strcpy(pn, temp);						// copy string into **smaller space**

	return pn;								// temp lost when function ends
}

/*
* 
* // Explaination!
*	 getname()
*	- returns a pointer to an input string.
*	- it reads the input into a large temporary array then uses new[] with *appropritae size* 
*	to create a chunck of memory that fits the input string.
*	- This approach conserve a lot of memory for grams that read in a large number of strings.
* 
* // Caution!
*	- Using 'delete' and 'delete[]' properly
*		- Use delete[] on new[] & Use delete on new!
*		- Using 'delete' on 'new[]' can cause memory leaks or corruption. 'delete' itself doesn't
*		know how many were allocated in the array. Using 'delete[]' on 'new' also leads to 
*		undefined behavior
*/