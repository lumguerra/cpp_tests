#include <iostream>

int main()
{

	double lenght{ 0 };
	double width{ 0 };
	double height{ 0 };


	std::cout << "Welcome to box calculator. Please type in lenght, width and height information :\n";
	std::cout << "length: ";
	std::cin >> lenght;
	std::cout << "\nwidth: ";
	std::cin >> width;
	std::cout << "\nheight: ";
	std::cin >> height;
	std::cout << "\nThe base area is : " << lenght * width;
	std::cout << "\nThe volume is: " << lenght * width * height;


	return 0;
}