// outfile.cpp -- wrting to a file
#include<iostream>
#include<fstream>

int main()
{
	using namespace std;

	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream outFile;				// create object for output
	outFile.open("carinfo.txt");	// associate with a file

	cout << "Enter the make and model of automobile: ";
	cin.getline(automobile, 50);
	cout << "Enter the model year: ";
	cin >> year;
	cout << "Enter the original asking price: ";
	cin >> a_price;
	d_price = 0.913 * a_price;

	cout << fixed;					// sets the floating-point output to fixed-point notation.
	cout.precision(2);				// use a precision of 2 for the display
	cout.setf(ios_base::showpoint);	// ensures that the decimale point is alquas displayed (even if there are no digits to it)
	cout << "Make and model: " << automobile << endl;
	cout << "Year: " << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << d_price << endl;

	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and model: " << automobile << endl;
	outFile << "Year: " << year << endl;
	outFile << "Was asking $" << a_price << endl;
	outFile << "Now asking $" << d_price << endl;

	outFile.close();

	return 0;
}