// structur.cpp -- a simple structure
#include <iostream>
struct inflatbale
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatbale guest =
	{
		"Glorious Gloria",
		1.88,
		27.77
	};

	inflatbale pal =
	{
		"audacious arthure",
		3.28,
		32.97
	};

	cout << "Expand your guest list with " << guest.name;
	cout << " and " << pal.name << "!\n";

	cout << "You can have both for $";
	cout << guest.price + pal.price << "!\n";

	return 0;
}