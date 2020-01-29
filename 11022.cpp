//A+B -8
#include <iostream>

int main()
{
	int t, i = 1;
	std::cin >> t;
	while (t--)
	{
		int a, b;
		std::cin >> a >> b;
		std::cout << "Case #" << i++ << ": " << a << " + " << b << " = " << a + b << '\n';

	}

	return 0;
}