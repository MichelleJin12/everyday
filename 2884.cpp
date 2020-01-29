//알람 시계

#include <iostream>

int main()
{
	int H, M;
	std::cin >> H >> M;
	if (M - 45 <= 0)
	{
		H--;
		M += 15;
	}
	else
	{
		M -= 45;
	}
	if (H <= 0) H += 24;
	if (H >= 24) H -= 24;
	std::cout << H << " " << M;

	return 0;
}