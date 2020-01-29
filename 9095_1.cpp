#include <iostream>


int go(int sum, int goal);


int main()
{
	int n; int num;
	std::cin >> n;
	while (n--)
	{
		int ans;
		std::cin >> num;
		ans = go(0, num);
		std::cout << ans << '\n';
	}


	return 0;
}

int go(int sum, int goal)
{
	if (sum > goal) return 0;
	if (sum == goal)return 1;
	int now = 0;
	for (int i = 1; i <= 3; i++)
	{
		now += go(sum + i, goal);
	}
	return now;
}