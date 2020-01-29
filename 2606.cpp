//바이러스
#include <iostream>
#include <vector>

#define COM_MAX 101
int check[COM_MAX] = { 0 };
std::vector<int> v[COM_MAX];
void dfs(int x);

int main()
{
	int c; int cnt = 0;
	std::cin >> c;
	int e;
	std::cin >> e;
	while (e--)
	{
		int a, b;
		std::cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(1);

	for (int i = 1; i <= c; i++)
	{
		if (check[i] == 1)
			cnt++;
	}
	std::cout << cnt-1;

	return 0;
}

void dfs(int x)
{
	check[x] = 1;
	for (int i = 0; i < v[x].size(); i++)
	{
		if (check[v[x][i]] == 0)
		{
			dfs(v[x][i]);
		}
	}
}