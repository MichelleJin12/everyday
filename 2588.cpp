//°ö¼À

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;

	std::cout << a * ((b % 100) % 10) << std::endl;
	std::cout << a * ((((b % 100) - ((b % 100) % 10)))/10) << std::endl;
	std::cout << a * (((b - ((b % 100) - ((b % 100) % 10))))/100) << std::endl;
	std::cout << a * b;

	return 0;
}