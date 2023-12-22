// strucUnion -- how union can be used on the structure
#include <iostream>
struct widget
{
	int type;
	union id
	{
		long id_num;
		char id_char[20];
	}id_val;
};

int main()
{
	using namespace std;

	widget wd1, wd2;
	wd1.type = 1;
	wd2.type = 2;

	cout << "wd1 is ";
	if (wd1.type == 1)
	{
		cout << "type1, Enter the id_num of wd1.\n";
		cin >> wd1.id_val.id_num;
	}
	else
	{
		cout << "not type1, Enter the id_char of wd1.\n";
		cin >> wd1.id_val.id_char;
	}

	cout << "wd2 is ";
	if (wd2.type == 1)
	{
		cout << "type1, Enter the id_num of wd2.\n";
		cin >> wd2.id_val.id_num;
	}
	else
	{
		cout << "not type1, Enter the id_char of wd2.\n";
		cin >> wd2.id_val.id_char;
	}

	cout << "wd1.id_val.id_num = " << wd1.id_val.id_num << ", wd1.id_val.id_char = " << wd1.id_val.id_char << endl;
	cout << "wd2.id_val.id_num = " << wd2.id_val.id_num << ", wd2.id_val.id_char = " << wd2.id_val.id_char << endl;

	return 0;
}