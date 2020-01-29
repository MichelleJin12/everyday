#include <iostream>

int gcd(int, int);

int main()
{
	int a;

	std::cin >> a;

	while (a > 0)
	{
		int b, c;
		std::cin >> b >> c;
		std::cout << gcd(b, c) * (b / gcd(b, c)) * (c / gcd(b, c)) << std::endl;
		a--;
	}


	return 0;
}

int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		gcd(b, a % b);
	}
}