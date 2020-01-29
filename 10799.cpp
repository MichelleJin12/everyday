#include <iostream>
#include <stack>
#include <string>

int pipe(std::string s);

int main()
{
	std::string s;
	std::cin >> s;
	std::cout << pipe(s) << std::endl;
	return 0;
}

int pipe(std::string s)
{
	int sum = 0; std::stack<char>stack;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
		{
			stack.push(s[i]);
		}
		else
		{
			if (s[i - 1] == '(')
			{
				stack.pop();
				sum += stack.size();
			}
			else
			{
				stack.pop();
				sum++;
			}
		}
	}
	return sum;
}