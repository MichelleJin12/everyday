#include <iostream>
#include <algorithm>

int main()
{
	int a[9]; int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		std::cin >> a[i];
		sum += a[i];
	}
	std::sort(a, a + 9);
	std::cout << '\n';

	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (sum - a[i] - a[j] == 100)
			{
				for (int k = 0; k < 9; k++)
				{
					if (k == i || k == j) continue;
					std::cout << a[k] << std::endl;

				}
				return 0;
			}
		}
	}


}