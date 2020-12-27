#include <iostream>

int main()
{
	using namespace std;

	const double MILE2KM = 1.60934;
	const double GALLAN2L = 3.78541;

	double distance_mile, oil_gallan;

	cout << "Enter the distance in mile: ";
	cin >> distance_mile;
	cout << "Enter the oil in gallan: ";
	cin >> oil_gallan;
	cout << distance_mile / oil_gallan << " mile/gallan, " << (distance_mile * MILE2KM) / (oil_gallan * GALLAN2L) / 100.0 << " L/100km";

	return 0;
}