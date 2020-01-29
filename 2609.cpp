#include <iostream>

int gcd(int, int);

int main()
{
	int a, b;

	std::cin >> a >> b;

	std::cout << gcd(a, b) << std::endl
		<< gcd(a, b) * (a / gcd(a, b)) * (b / gcd(a, b));


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
		return gcd(b, a % b);
	}
}