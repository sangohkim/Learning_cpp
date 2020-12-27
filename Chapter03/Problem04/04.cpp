#include <iostream>

int main()
{
	using namespace std;

	const long HOUR_DAY = 24;
	const long MIN_HOUR = 60;
	const long SEC_MIN = 60;

	long sec;

	cout << "Enter seconds: ";
	cin >> sec;
	cout << sec << "seconds = " << sec / (HOUR_DAY * MIN_HOUR * SEC_MIN) << "days, "
		<< sec % (HOUR_DAY * MIN_HOUR * SEC_MIN) / (MIN_HOUR * SEC_MIN) << "hours, "
		<< sec % (HOUR_DAY * MIN_HOUR * SEC_MIN) % (MIN_HOUR * SEC_MIN) / SEC_MIN << "mins, "
		<< sec % (HOUR_DAY * MIN_HOUR * SEC_MIN) % (MIN_HOUR * SEC_MIN) % SEC_MIN << "seconds";
	return 0;
}