//¹Ì·ÎÅ½»ö

#include <iostream>
#include <vector>
int main()
{
	int N, M;
	std::cin >> N >> M;
	int v[10000][10000];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			int a;
			std::cin >> a;
			v[i][j] = a;
		}
	}
	return 0;
}