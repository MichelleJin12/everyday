#include <iostream>
#define MAX 500

int main()
{
	int a, b;
	int sum = 0; int temp = 0;
	std::cin >> a >> b;
	int m[MAX][MAX];

	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
		{
			std::cin >> m[i][j];
		}
	for (int i = 0; i < a; i++)
		for (int j = 0; j<b-3;j++)
		{
			sum += m[j] + m[j + 1] + m[j + 2] + m[j + 3];
			if (temp <= sum) temp = sum;
		}

	return 0;
}