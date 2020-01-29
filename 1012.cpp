//유기농 배추
#include <iostream>
#include <vector>
#define M_MAX 50
#define N_MAX 50
#define K_MAX 2500
void dfs(int x);

int main()
{
	int T;
	std::cin >> T;
	while (T--)
	{
		int check[M_MAX][N_MAX] = { 0 };
		int cnt = 0;
		int M, N, K;
		std::cin >> M >> N >> K;
		while (K--)
		{
			int a, b;
			std::cin >> a >> b;
			check[b][a] = 1;
		}
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (check[i][j] == 1)
				{
					if (check[i + 1][j] == 1)
					{
						i++;
						if (check[i][j + 1] == 1)
						{
							j++;
						}
					}
					cnt++;
				}
			}
		}
		std::cout << cnt << std::endl;

	}


	return 0;
}
