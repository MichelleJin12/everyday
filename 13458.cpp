//���� ����
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; int A[1000000];
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	int B, C;
	cin >> B >> C;
	long long n1 = 0;
	for (int i = 0; i < N; i++)
	{
		A[i] -= B;
		if (A[i] > 0)
		{
			if (A[i] % C == 0)
			{
				n1 += A[i] / C;
			}
			else n1 += A[i] / C + 1;
		} //���⸦ ���� �ϳ��ϳ� +1�� �ߴµ� �׷��� �ð� �ʰ��� ��..����
		n1++;
	}
	cout << n1 <<'\n';
	return 0;
}