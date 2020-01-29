//X보다 작은 수

#include <iostream>
int A[10001] = { 0 };

int main()
{
	int N, X;
	std::cin >> N >> X;
	for (int i = 0; i < N; i++)
	{
		int a;
		std::cin >> a;
		A[i] = a;
	}
	for (int j = 0; j < N; j++)
	{
		if (A[j] < X)
		{
			std::cout << A[j] << " ";
		}
	}

	return 0;
}