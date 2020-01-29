#include <iostream>


int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;

	int E = 1, S = 1, M = 1;
	int year = 1;
	while (1)
	{		
		if (a == E && b == S && c == M) 
		{
			std::cout << year; 
			break;
		}
		year++; E++; S++; M++;

		if (E == 16) E = 1;
		if (S == 29) S = 1;
		if (M == 20) M = 1;
	}
	return 0;
}