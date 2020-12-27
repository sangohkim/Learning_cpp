#include <iostream>

int main()
{
	using namespace std;

	const double TRANSFER = 0.01;
	int height_cm;

	cout << "Insert your height in centimeter: ________\b\b\b\b\b\b\b\b";
	cin >> height_cm;
	cout << height_cm << "cm is equal to " << height_cm * TRANSFER << "m.";

	return 0;
}