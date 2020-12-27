#include <iostream>

int main()
{
	using namespace std;

	long long population_tot, population_usa;
	
	cout << "Enter the population of the whole world: ";
	cin >> population_tot;
	cout << "Enter the population of the United States: ";
	cin >> population_usa;
	cout << "The percentage of the world's population in the United States: " << double(population_usa) / double(population_tot) * 100.00;

	return 0;
}