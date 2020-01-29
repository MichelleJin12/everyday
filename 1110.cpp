//더하기 사이클
#include <iostream>

int main()
{
	int N;
	std::cin >> N;
	int temp = N, cnt = 0;
	while (N != temp)
	{
		if (N < 10) {
			N = N * 10 + N;
			cnt++;
		}
		else {
			N = (N / 10) + (N % 10) + (10 * (N % 10));
			cnt++;
		}
	}
	std::cout << cnt;

	return 0;
}