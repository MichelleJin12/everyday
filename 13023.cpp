//ABCDE
#include <iostream>
#include <vector>
int dfs(std::vector<int> v, int, int);
int main()
{
	int n, e;
	std::cin >> n >> e;
	std::vector<int> v[2000]; //����2000��
	for (int i = 0; i < n; i++)
	{
		v[i].push_back(i); //0~n-1������ ����� ��ȣ �ֱ�
	}
	for (int i = 0; i < e; i++)
	{
		int a, b;
		std::cin >> a >> b; //����� ��� �Է�
		if (v[i][0] == a)
		{
			v[i].push_back(b); //v�� ��ȣ�� a�� ��ġ�ϸ� b ����
		}
	}
	int d;
	for (int i = 0; i < n; i++)
	{
		d = dfs(v[i], 0, n);
	}
	std::cout << d;
	return 0;
}
int dfs(std::vector<int> v, int i, int n)
{
	static int visit[2000];
	static int c = 0;
	visit[i] = true;
	if (v[i + 1])
	{
		dfs(v, i + 1, n);
		c++;	
	}
	if (c == n) return 1;
	else return 0;
}