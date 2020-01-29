#include <iostream>
#include <cstring>
#include <vector>

#define MAX 2000
using namespace std;

int N, M;
bool Visit[MAX], Answer;
vector <int> V[MAX];

void Input()
{
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		V[a].push_back(b);
		V[b].push_back(a);
	}
}

void DFS(int Idx, int Cnt)
{
	if (Cnt == 5)
	{
		Answer = true;
		return;
	}
	Visit[Idx] = true;

	for (int i = 0; i < V[Idx].size(); i++)
	{
		int Next = V[Idx][i];
		if (Visit[Next] == true) continue;
		DFS(Next, Cnt + 1);
		if (Answer == true) return;
	}
	Visit[Idx] = false;
}

void Solution()
{
	for (int i = 0; i < N; i++)
	{
		memset(Visit, false, sizeof(Visit));
		DFS(i, 1);
		if (Answer == true) break;
	}
	if (Answer == true) cout << 1 << endl;
	else cout << 0 << endl;
}

void Solve()
{
	Input();
	Solution();
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	Solve();

	return 0;
}