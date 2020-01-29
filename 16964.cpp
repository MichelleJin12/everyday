//DFS 스페셜 저지

#include <iostream>
void dfs(int x);
int check[100000];
int main()
{


	return 0;
}

void dfs(int x)
{
	if (check[x] == true)
	{
		return;
	}
	check[x] = true;
	for (int y)
	{
		if (check[y] == false)
		{
			dfs(y);
		}
	}
}

