#include <iostream>

void print1();
void print2();

int main()
{
	using namespace std;

	print1();
	print1();
	print2();
	print2();

	return 0;
}

void print1()
{
	using namespace std;

	cout << "Three blind mice" << endl;
}

void print2()
{
	using namespace std;

	cout << "See how they run" << endl;
}