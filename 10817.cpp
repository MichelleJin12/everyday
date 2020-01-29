//¼¼ ¼ö

#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	if (a > b)
	{
		if (a < c)
		{
			std::cout << a;
		}
		else
		{
			if (b > c)
				std::cout << b;
			else
				std::cout << c;
		}
	}
	else
	{
		if (c < a)
		{
			std::cout << a;
		}
		else
		{
			if (b < c)
			{
				std::cout << b;
			}
			else std::cout << c;
		}
	}

	return 0;
}