#include <iostream>

int main()
{
	using namespace std;

	int age;

	cout << "Enter your age: ";
	cin >> age;
	cout << "Oh, you're " << age << " years old!" << endl;
	cout << "Then, you have lived " << age * 12 << " months!";

	return 0;
}