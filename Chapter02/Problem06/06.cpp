#include <iostream>

double lytoau(double ly);

int main()
{
	using namespace std;

	double ly;

	cout << "Insert LY and push Enter key: ";
	cin >> ly;
	cout << ly << "LY is equal to " << lytoau(ly) << "AU.";

	return 0;
}

double lytoau(double ly)
{
	return ly * 63240.0;
}