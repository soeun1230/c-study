/*#include <iostream>
#include <cstdlib>
using namespace std;

class Temperature {
public:
	void setTempKelvin(double temp);
	void setTempFahrenheit(double temp);
	void setTempCelsius(double temp);
	double getTempKelvin();
	double getTempFahrenheit();
	double getTempCelsius();

private:
	double kelvin;
};

void Temperature::setTempKelvin(double temp) {
	kelvin = temp;
}
void Temperature::setTempFahrenheit(double temp) {
	kelvin = 5 / 9 * (temp - 32) + 273.15;
}
void Temperature::setTempCelsius(double temp) {
	kelvin = temp + 273.15;
}
double Temperature::getTempKelvin() {
	return kelvin;
}
double Temperature::getTempCelsius() {
	return kelvin - 273.15;
}
double Temperature::getTempFahrenheit() {
	return getTempCelsius() * 9 / 5 + 32;;
}

int main() {
	Temperature temp;
	temp.setTempFahrenheit(50);
	cout << "In Celsius: " << temp.getTempCelsius() << endl;
	cout << "In Fahrenheit: " << temp.getTempFahrenheit() << endl;
	cout << "In Kelvin: " << temp.getTempKelvin() << endl;
	cout << endl;

	temp.setTempCelsius(115);
	cout << "In Celsius: " << temp.getTempCelsius() << endl;
	cout << "In Fahrenheit: " << temp.getTempFahrenheit() << endl;
	cout << "In Kelvin: " << temp.getTempKelvin() << endl;
	cout << endl;

	temp.setTempKelvin(10);
	cout << "In Celsius: " << temp.getTempCelsius() << endl;
	cout << "In Fahrenheit: " << temp.getTempFahrenheit() << endl;
	cout << "In Kelvin: " << temp.getTempKelvin() << endl;
	cout << endl;

	cout << "Enter a charater to exit." << endl;
	char decide;
	cin >> decide;
}*/
