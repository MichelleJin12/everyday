//Å« ³ğ, ÀÛÀº ³ğ, °°Àº ³ğ
#include <iostream>
char compare(int s[]);
int main()
{
	int t; int i = 1;
	std::cin >> t;
	while (t--)
	{
		int s[2];
		for (int i = 0; i < 2; i++)
		{
			std::cin >> s[i];
		}
		std::cout << "#" << i << " " <<compare(s) << std::endl;
		i++;
	}
	return 0;
}

char compare(int s[])
{
	if (s[0] > s[1]) return '>';
	else if (s[0] == s[1]) return '=';
	else return '<';
}