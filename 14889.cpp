//스타트와 링크
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int a; int A[100][100];
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cin >> A[i][j];
		}
	}
	vector<int> v;
	for (int i = 0; i < a; i++)
	{
		v.push_back(i + 1);
	}
	vector<int> s;
	for (int i = 0; i < a / 2; i++)
	{
		s.push_back(1);
	}
	for (int i = 0; i < v.size() - a / 2; i++)
	{
		s.push_back(0);
	}
	sort(s.begin(), s.end());
	do 
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 1) 
			{
				v[i];
			}
		}
	} while (1);
	return 0;
}