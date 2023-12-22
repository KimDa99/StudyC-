// union.cpp -- shows how union works
#include <iostream>
union one4all
{
	int int_val;
	long long_val;
	double double_val;
};
int main()
{
	using namespace std;

	one4all pail;
	pail.int_val = 15;
	cout << pail.int_val << endl;

	pail.double_val = 1.38;
	cout << pail.double_val << endl;
	cout << pail.int_val << endl;		// prints -515396076

	return 0;
}