#include <iostream>

int main(void)
{
	using namespace std;

	double distance;

	cout << "Insert the distance in mile: ";
	cin >> distance;
	cout << distance << "mile is equal to " << distance * 1.60934 << "km.";

	return 0;
}