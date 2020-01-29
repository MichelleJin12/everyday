//연결요소

#include <iostream>
#include <vector>
#define VERTEX_MAX 10000
int check[VERTEX_MAX] = { false };
void dfs(int x);
std::vector<int> v[VERTEX_MAX];
int comp = 0;
int main()
{

	int N, M;
	std::cin >> N >> M;
	while (M--)
	{
		int a, b;
		std::cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for (int i = 1; i <= N; i++)
	{
		if (check[i] == false)
		{
			dfs(i);
			comp++;
		}
	}
	std::cout << comp;
	return 0;
}

void dfs(int x)
{
	check[x] = true;
	for (int i = 0; i < v[x].size(); i++)
	{
		if (check[v[x][i]] == false)
		{
			dfs(v[x][i]);
		}
	}

}