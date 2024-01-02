#include <iostream>
const int Cities = 5;
const int Years = 4;
int main()
{
	using namespace std;
	const char* cities[Cities] =		// array of pointers to 5 strings
	{
		"Gribble City",
		"Gribble town",
		"Gribble valley",
		"Gribble world",
		"Gribble land"
	};
	int maxtemps[Years][Cities] =
	{
		{96, 100 ,85, 123, 6276},
		{62, 180 ,25, 12, 276},
		{98, 150 ,55, 23, 676},
		{93, 120 ,95, 13, 626}	
	};
	
	cout << "Maximum temperature s for 2008 - 2011\n\n";
	for (int city = 0; city < Cities; ++city)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year)
			cout << maxtemps[year][city] << "\t";
		cout << endl;
	}

	return 0;
}
