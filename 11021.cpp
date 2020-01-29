//A+B -7

#include <iostream>

int main()
{
	unsigned int t; int i = 1;
	std::cin >> t;
	while (t--)
	{
		int a, b;
		std::cin >> a >> b;
		std::cout << "Case #" << i++ << ": " << a + b << '\n';
	}


	return 0;
}