// exceed.cpp -- exceed some integer limtis
#include <iostream>
#include <climits>
#define ZERO 0 // make ZERO symbol for 0 value

int main()
{
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = sam;

	cout << "Sam has " << sam << " dolloars and Sue has " << sue << " dollars." << endl;
	cout << "Add $1 to each account." << endl << "Now ";
	sam += 1;
	sue += 1;
	cout << "Sam has " << sam << " dolloars and Sue has " << sue << " dollars. \npoor sam" << endl;
	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dolloars and Sue has " << sue << " dollars." << endl;
	cout << "Take $1 from each account. " << endl << "Now";
	sam -= 1;
	sue -= 1;
	cout << "Sam has " << sam << " dolloars and Sue has " << sue << " dollars. \nLucky sue!";

	return 0;
}