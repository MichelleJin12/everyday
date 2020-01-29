//A+B-6
#include <iostream>
#include <string>
int main()
{
	int t; std::string str;
	std::cin >> t;
	while (t--)
	{
		std::cin >> str;
		int a, b;
		a = str[0]; b = str[2];
		std::cout << a << '\n';
		std::cout << b << '\n';
		std::cout << a + b << '\n';
	}
	return 0;
}