#include <iostream>
#include <vector>
#include <algorithm>
//#include <utility> 없어도 된다 make_pair 헤더인줄 알았는데 모르겠다
std::pair<int, int> calc(std::vector<int>& a, int index, int cur, int plus, int minus, int mul, int div);
//계산하는 함수


int main()
{
	int n; //숫자 몇개 받을 건지
	std::cin >> n;  //숫자 입력
	std::vector<int> a(n); //n 크기의 벡터 만들기
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i]; //a벡터에 숫자 넣어주기
	}
	int plus, minus, mul, div; //+-*/ 갯수 
	std::cin >> plus >> minus >> mul >> div; //연산자 갯수 입력해주기
	auto p = calc(a, 1, a[0], plus, minus, mul, div); //p에 pair.calc 저장
	std::cout << p.first << '\n'; //p첫번째거 출력
	std::cout << p.second << '\n';//p두번째거 출력

	return 0;
}


std::pair<int, int> calc(std::vector<int>& a, int index, int cur, int plus, int minus, int mul, int div)
{
	int n = a.size(); //변수 n에 a사이즈 넣기
	if (index == n) // 이건 뭐지...?
	{
		return std::make_pair(cur, cur);
	}
	std::vector<std::pair<int, int>> res; //타입이 pair인 res 벡터 선언
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
	for (auto p : res)//이것도 모르겠다
	{
		if (ans.first < p.first) //ans가 p보다 작으면 ans에 p넣어줌
		{
			ans.first = p.first;
		}
		if (ans.second > p.second) //ans가 p보다 크면 ans에 p 넣어줌
		{
			ans.second = p.second;
		}
	}
	return ans;
}