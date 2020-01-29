#include <iostream>

int gcd(int, int);


int main()
{
		int b;
		std::cin >> b;
		while (b--)
		{
			int c[111];
			int n;
			std::cin >> n;
			for (int i = 0; i < n; i++)
			{
				std::cin >> c[i];
			}
			long long d = 0;
			for (int i = 0; i < n - 1; i++)
			{
				for (int j = i + 1; j < n; j++)
				{
					d += gcd(c[i], c[j]);
				}
			}
			std::cout << d << std::endl;

		}



	return 0;
}

int gcd(int a, int b)
{
	if (b == 0) return 0;
	else gcd(b, a % b);
}