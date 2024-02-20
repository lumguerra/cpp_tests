#include <iostream>

double convertTemp(double celsius)
{
	return 1.8 * celsius + 32;
}

int main()
{

	double celsius{ 0 };
	std::cout << "Please enter a degree value in celsius :\n";
	std::cin >> celsius;
	std::cout << celsius << "Celsius is " << convertTemp(celsius) << "Fahrenheit";

	return 0;
}