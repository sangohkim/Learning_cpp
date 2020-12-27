#include <iostream>

int main()
{
	using namespace std;

	const double FTOI = 12;
	const double PTOK = 1.0 / 2.2;
	const double ITOM = 0.0254;

	double height_ft, height_ih, weight_pd, bmi;

	cout << "Enter your height in feet: ";
	cin >> height_ft;
	height_ih = height_ft * FTOI;
	cout << "Enter your weight in pound: ";
	cin >> weight_pd;
	bmi = (weight_pd * PTOK) / ((height_ih * ITOM) * (height_ih * ITOM));
	cout << "BMI: " << bmi;

	return 0;
}