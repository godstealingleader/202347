#include <iostream>

int main()
{
	using namespace std;
	int high_ft = 0,high_in, weight = 0;
	const int ft_to_in = 12;
	const float in_to_m = 0.0254;
	cout << "Please input your weight with pound and high with foot and inch:\0";
	cout << "My weight is :____\b\b\b\b"; cin >> weight;
	cout << "My high(foot) is :"; cin >> high_ft;
	cout << "My high(inch) is :"; cin >> high_in;
	cout << "Your BMI is :" << (weight * weight) / ((ft_to_in * high_ft + high_in) * in_to_m);
	return 0;
}