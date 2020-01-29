#include <iostream>

short isPrime(int);

int main()
{
	int a; int sum = 0;
	std::cin >> a;
	while (a--)
	{
		int b;
		std::cin >> b;
		sum += isPrime(b);
	}
	std::cout << sum;

	return 0;
}

short isPrime(int n)
{
	if (n < 2)
		return 0;
	else
	{
		for (int i = 2; i * i <= n; i++)
		{
			if (n % i == 0) return 0;
		}
		return 1;
	}

}