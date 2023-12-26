// compstr2.cpp -- comparing strings using array 12 241
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	char word[5] = "mate";

	for (char ch = 'a'; word != "mate"; ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;

	return 0;
}