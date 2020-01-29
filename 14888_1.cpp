#include <iostream>
#include <vector>
#include <algorithm>
//#include <utility> ��� �ȴ� make_pair ������� �˾Ҵµ� �𸣰ڴ�
std::pair<int, int> calc(std::vector<int>& a, int index, int cur, int plus, int minus, int mul, int div);
//����ϴ� �Լ�


int main()
{
	int n; //���� � ���� ����
	std::cin >> n;  //���� �Է�
	std::vector<int> a(n); //n ũ���� ���� �����
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i]; //a���Ϳ� ���� �־��ֱ�
	}
	int plus, minus, mul, div; //+-*/ ���� 
	std::cin >> plus >> minus >> mul >> div; //������ ���� �Է����ֱ�
	auto p = calc(a, 1, a[0], plus, minus, mul, div); //p�� pair.calc ����
	std::cout << p.first << '\n'; //pù��°�� ���
	std::cout << p.second << '\n';//p�ι�°�� ���

	return 0;
}


std::pair<int, int> calc(std::vector<int>& a, int index, int cur, int plus, int minus, int mul, int div)
{
	int n = a.size(); //���� n�� a������ �ֱ�
	if (index == n) // �̰� ����...?
	{
		return std::make_pair(cur, cur);
	}
	std::vector<std::pair<int, int>> res; //Ÿ���� pair�� res ���� ����
	if (plus > 0)
	{
		res.push_back(calc(a, index + 1, cur + a[index], plus - 1, minus, mul, div));//push_back..?
	}
	if (minus > 0)
	{
		res.push_back(calc(a, index + 1, cur - a[index], plus, minus - 1, mul, div));
	}
	if (mul > 0)
	{
		res.push_back(calc(a, index + 1, cur * a[index], plus, minus, mul - 1, div));
	}
	if (div > 0)
	{
		res.push_back(calc(a, index + 1, cur / a[index], plus, minus, mul, div - 1));
	}
	auto ans = res[0];
	for (auto p : res)//�̰͵� �𸣰ڴ�
	{
		if (ans.first < p.first) //ans�� p���� ������ ans�� p�־���
		{
			ans.first = p.first;
		}
		if (ans.second > p.second) //ans�� p���� ũ�� ans�� p �־���
		{
			ans.second = p.second;
		}
	}
	return ans;
}