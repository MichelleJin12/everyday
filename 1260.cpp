#include <iostream>
#include <vector>
#include <queue>

using namespace std;
void dfs(int start, vector<int> v[], bool check[]);
void bfs(int start, vector<int> v[], bool check[]);
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int N, M, V; vector<int> v[1000];
	bool check[1000]= { false }; int arr[1000];
	std::cin >> N >> M >> V;
	for (int i = 0; i < M; i++)
	{
		int a, b;
		std::cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(V, v, check);
	cout << "\n";
	bfs(V, v, check);
	return 0;
}

void dfs(int start, vector<int> v[], bool check[])
{
	check[start] = true;
	cout << start << " ";
	for (int i = 0; i < v[start][i]; i++)
	{
		int y = v[start][i];
		if (check[y] == false)
		{
			dfs(y, v, check);
		}
	}
}

void bfs(int start, vector<int> v[], bool check[])
{
	queue<int> q;
	q.push(start);
	check[start] = true;
	while (!q.empty())
	{
		int tmp = q.front();
		q.pop();
		cout << tmp << " ";
		for (int i = 0; i < v[tmp].size(); i++)
		{
			if (check[v[tmp][i]] == false)
			{
				q.push(v[tmp][i]);
				check[v[tmp][i]] == true;
			}
		}
	}
}