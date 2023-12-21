//limits.cpp -- some integer limits
#include <iostream>
#include <climits>

int main()
{
	using namespace std;

	int n_int = INT_MAX;		// initialize n_int to max int value
	short n_short = SHRT_MAX;	// symbols defined in climits file
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	// prints out size of types
	cout << "int is " << sizeof(int) << " bytes." << endl; // sizeopf operator yeild size of type or variable.
	cout << "short is " << sizeof(short) << " bytes." << endl;
	cout << "long is " << sizeof(long) << " bytes." << endl;
	cout << "long long is " << sizeof(long long) << " bytes." << endl;

	// prints out MAX values of types.
	cout << "Maximum values: " << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl;

	// pritns out min values of types
	cout << "minimum values: " << endl;
	cout << "int: " << INT_MIN << endl;
	cout << "short: " << SHRT_MIN << endl;
	cout << "long: " << LONG_MIN << endl;
	cout << "long long: " << LLONG_MIN << endl;

	cout << "Bits per byte = " << CHAR_BIT << endl;
}