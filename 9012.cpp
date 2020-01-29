#include <iostream>
#include <stack>

int stack(std::string str);

int main()
{
	int a;
	std::cin >> a;
	while (a--)
	{
		std::string str;
		std::cin >> str;
		if (stack(str)) std::cout << "YES" << std::endl;
		else std::cout << "NO" << std::endl;
	}
	return 0;
}

int stack(std::string str) {		
	std::stack<char>stack1;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '(') stack1.push(str[i]);
		else if (str[i] == ')')
		{
			if (stack1.empty())
			{
				return 0;
			}
			else stack1.pop();
		}
		else
		{
			printf("Wrong");
			continue;
		}
	}
}