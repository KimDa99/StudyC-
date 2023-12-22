// use_delete.cpp -- using the delete operator
#include <iostream>
int main()
{
	using namespace std;
	int nights = 1001;
	
	int* pt = new int;
	*pt = 1001;

	cout << "nights value = ";
	cout << nights << ": location " << &nights << endl;
	cout << "int ";
	cout << "value = " << *pt << ": location = " << pt << endl;
	
	delete pt;
//	delete pt;		// throw exception(0x00007FFC3442024E) it is already deleted
	int* pi = &nights;
//	delete pi;		// not allowed **delete** only free memory allocated with new
					// Invalid address specified to RtlValidateHeap( 000001A461470000, 00000012B276F794 )
	int* pr = nullptr;
	delete pr;		// it is safe to apply delete to a null pointer (even tho it is meaningless)
	cout << "pr = nullptr, pr address : " << pr << endl;
//	cout << "*pr : " << *pr;	// throw exception
								//예외가 throw됨: 읽기 액세스 위반입니다.	**pr** 이(가) nullptr였습니다.

	return 0;
}