// textin.cpp -- reading chars with a while loop
#include <iostream>
int main()
{
	using namespace std;
	char ch;

	int count = 0;

	cout << "Enter characters; enter # to quit: \n";
	cin >> ch;
	while (ch != '#')		//.... be careful about adding ';' on while... 
	{
		cout << ch << " entered. \n";
		++count;
		cin >> ch;
	}
	cout << endl << count << " characters read \n";

	return 0;
}