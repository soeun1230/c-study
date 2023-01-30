#include <iostream>
using namespace std;

double convertToMPH(int min, int sec) {
	double mile = 1;
	double hour = (double)(min * 60 + sec) / 3600;
	double mph = mile / hour;
	return mph;
} 

double convertToMPH(double kph) {
	double mile = kph / 1.61;
	double hour = 1;
	double mph = mile / hour;
	return mph;
}

int main() {
	/*double mile = 1;
	int min, sec;
	char ans;
	do
	{
		cout << "Enter min and sec:\n";
		cin >> min >> sec;

		double hour = (double)(min * 60 + sec) / 3600;
		double mph = mile / hour;

		cout << "hour is " << hour << " and mph is " << mph<<endl;

		cout << "Test again? (y/n)";
		cin >> ans;
		cout << endl;

	} while (ans == 'y' || ans == 'Y');*/
	// convertToMPH(int min, int sec)에 대한 driver program
	
	/*double kph;
	double hour = 1;
	char ans;
	do
	{
		cout << "Enter kph:\n";
		cin >> kph;

		double mile = kph / 1.61;
		double mph = mile / hour;

		cout << "mile is " << mile << " and mph is " << mph << endl;

		cout << "Test again? (y/n)";
		cin >> ans;
		cout << endl;

	} while (ans == 'y' || ans == 'Y');*/
	//convertToMPH(double kph)에 대한 driver program

	
	cout << 6 << ":" << 30 << " pace is " << convertToMPH(5, 30) << " MPH." << endl;
	cout << 8 << ":" << 30 << " pace is " << convertToMPH(7, 30) << " MPH."<<endl;
	cout << 9 << ":" << 00 << " pace is " << convertToMPH(8, 00) << " MPH."<<endl;
	cout << 15 << " kph is " << convertToMPH(15) << " MPH." << endl;
	cout << 25 << " kph is " << convertToMPH(25) << " MPH." << endl;
	cout << 125 << " kph is " << convertToMPH(125) << " MPH." << endl;
	
	return 0;
}