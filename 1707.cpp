//이분그래프

#include <iostream>
#include <vector>
#include <cstring>
#define VERTEX_MAX 20001

int main()
{
	int T;
	std::cin >> T;
	while (T--)
	{
		int arr[VERTEX_MAX] = { 0 };
		std::vector<int> v[VERTEX_MAX];
		int V, E;
		std::cin >> V >> E;
		while (E--)
		{
			int a, b;
			std::cin >> a >> b;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		for (int i = 1; i <= V; i++)
		{
			for (int j = 0; j < v[i].size(); j++)
			{
				arr[v[i][j]]++;
			}
		}
		for (int i = 0; i < V; i++)
		{
			if (arr[i] >= 3)
			{
				std::cout << "NO" << std::endl;
				break;
			}
			if (i == V - 1)
			{
				std::cout << "YES" << std::endl;
			}
		}
	}
	return 0;
}
