//홀수만 더하기

#include <iostream>
int odd(int s[]);
int main()
{
	int t; int i = 1;
	std::cin >> t;
	while (t--)
	{
		int s[10];
		for (int i = 0; i < 10; i++)
		{
			std::cin >> s[i];
		}
		std::cout << "#" << i << " " << odd(s) << std::endl;
		i++;
	}

	return 0;
}

int odd(int s[])
{
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		if (s[i] % 2 != 0)
		{
			sum += s[i];
		}
		else continue;
	}
	return sum;
}