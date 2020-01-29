#include <iostream>
#include <string>
#include <queue>

int main()
{
	int t;
	std::cin >> t;
	std::queue<int> q;
	while (t--)
	{
		std::string s;
		std::cin >> s;
		if (s == "push")
		{
			int a;
			std::cin >> a;
			q.push(a);
		}
		else if (s == "pop")
		{
			if (q.size() == 0)
			{
				printf("%d\n", -1);
				continue;
			}
			std::cout << q.front() << std::endl;
			q.pop();
		}
		else if (s == "size")
		{
			std::cout << q.size() << std::endl;
		}
		else if (s == "empty")
		{
			if (q.empty()) std::cout << 1 << std::endl;
			else std::cout << 0 << std::endl;
		}
		else if (s == "front")
		{
			if (q.empty()) {
				std::cout << -1 << std::endl;
				continue;
			}
			std::cout << q.front() << std::endl;
		}
		else
		{
			if (q.empty()) {
				std::cout << -1 << std::endl;
				continue;

			}
			std::cout << q.back() << std::endl;
		}
	}
	return 0;
}