//평균값 구하기

#include <iostream>
#include <math.h>

int average(int s[]);
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
		std::cout << "#" << i << " " << average(s) << std::endl;
		i++;
	}
	return 0;
}

int average(int s[])
{
	float sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += s[i];
	}
	return round(sum/10);
}
