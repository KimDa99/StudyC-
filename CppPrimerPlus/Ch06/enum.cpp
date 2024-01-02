// enum.cpp -- using enum
#include <iostream>
enum {red, orange, yellow, green, blue, violet, indigo};

int main()
{
	using namespace std;
	cout << "Enter the color code (0-6): ";
	int code;
	cin >> code;

	while (code >= red && code <= indigo)
	{
		switch (code)
		{
			case red: cout << "the color is red.\n"; break;
			case orange: cout << "the color is orange.\n"; break;
			case yellow: cout << "the color is yellow.\n"; break;
			case green: cout << "the color is green.\n"; break;
			case blue: cout << "the color is blue.\n"; break;
			case violet: cout << "the color is violet.\n"; break;
			case indigo: cout << "the color is indigo.\n"; break;
		}
		cout << "Enter the color code (0-6): ";
		cin >> code;
	}

	cout << "Bye\n";

	return 0;
}