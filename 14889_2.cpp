#include <iostream>
#include <vector>
using namespace std;
int start(int S[], int);
int main()
{
	int n; int s[20][20];
	std::cin >> n; int S[20];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; i < n; j++)
		{
			int a = 0;
			std::cin >> a;
			s[i][j] = a;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (i == j) continue;
			S[i] = s[i][j] + s[j][i];
		}
	}
	start(S, n);
	return 0;
}
int start(int S[], int n)
{
	int c = 0, d = 0, cnt = 0;
	for (int i = 0; i < n; i++)
	{
		d += S[i];
	}
	int a[20] = { 0 };
	for (int i = 0; i < n; i++)
	{
		a[i] = 1;
		if (cnt < n / 2)
		{
			if (a[i] == 1) continue;
			c += S[i];
			cnt++;
		}
	}
	return (d - c);
}