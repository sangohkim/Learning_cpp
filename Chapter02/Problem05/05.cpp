#include <iostream>

double conv_to_fahr(double celsius);

int main()
{
	using namespace std;

	double celsius_temp;

	cout << "Insert Celsius temperature and push Enter key: ";
	cin >> celsius_temp;
	cout << celsius_temp << " degrees celsius is equal to " << conv_to_fahr(celsius_temp) << " Fahrenheit.";

	return 0;
}

double conv_to_fahr(double celsius)
{
	return 1.8 * celsius + 32.0;
}