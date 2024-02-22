#include <iostream>

template<typename T>

void swap(T& a, T& b)
{
	int temp = a;
	a = b;
	b = temp;
}


int main()
{

	int a{ 4 };
	int b{ 2 };
	char c{'c'};
	char d{'d'};


	std::cout << a << "-" << b << "\n";
	swap(a, b);
	std::cout << a << "-" << b << "\n";
	std::cout << c << "-" << d << "\n";
	swap(c, d);
	std::cout << c << "-" << d;

	return 0;
}