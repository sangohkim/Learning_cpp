#include <iostream>

int main()
{
	using namespace std;

	const double G2L = 3.875;
	const double HKM2M = 62.14;

	double l_per_hkm;

	cout << "Enter L/(100km): ";
	cin >> l_per_hkm;
	cout << G2L * HKM2M / l_per_hkm;

	return 0;
}