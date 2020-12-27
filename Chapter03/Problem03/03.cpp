#include <iostream>

int main()
{
	using namespace std;

	const int MIN_TO_DEG = 60;
	const int SEC_TO_DEG = 3600;

	double angle_deg, angle_min, angle_sec, latitude;

	cout << "Enter latitude in degrees, minutes, and seconds: " << endl;
	cout << "First, enter degree angle: ";
	cin >> angle_deg;
	cout << "Then, enter minute angle: ";
	cin >> angle_min;
	cout << "Finally, enter second angle: ";
	cin >> angle_sec;

	latitude = angle_deg + angle_min / MIN_TO_DEG + angle_sec / SEC_TO_DEG;
	cout << angle_deg << "degrees, " << angle_min << "minutes, " << angle_sec << "seconds = " << latitude << "degrees";

	return 0;
}