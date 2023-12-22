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
	inflatbale bouquet =
	{
		"sunflowers",
		0.88,
		12.57
	};

	inflatbale choice;

	cout << "bouquet: " << bouquet.name << " for $";
	cout << bouquet.price << endl;

	choice = bouquet;
	cout << "choice: " << choice.name << " for $";
	cout << choice.price << endl;

	return 0;
}