#include <iostream>

void display_time(int h, int m);

int main()
{
	using namespace std;

	int h, m;

	cout << "hour? : ";
	cin >> h;
	cout << "min? : ";
	cin >> m;

	display_time(h, m);

	return 0;
}

void display_time(int h, int m)
{
	using namespace std;

	cout << "time: " << h << ":" << m;
}