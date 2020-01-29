#include <iostream>
#include <vector>

std::vector<int> lotto;
void solve(std::vector<int>& a, int index, int cnt);

int main()
{
	while (true)
	{
		int n;
		std::cin >> n;
		if (n == 0)break;
		std::vector<int>a(n);
		for (int i = 0; i < n; i++)
		{
			std::cin >> a[i];
		}
		solve(a, 0, 0);
		std::cout << '\n';
	}
	return 0;
}

void solve(std::vector<int>& a, int index, int cnt)
{
	if (cnt == 6)
	{
		for (int num : lotto)
		{
			printf("%d ", num);
		}
		printf("\n");
		return;
	}
	int n = a.size();
	if (n == index)return;
	lotto.push_back(a[index]);
	solve(a, index + 1, cnt + 1);
	lotto.pop_back();
	solve(a, index + 1, cnt);
}