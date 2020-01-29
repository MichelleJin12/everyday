#include <iostream>
#include <string>
#include <vector>

std::vector<char> str(std::string s);

int main()
{
	int t; int i = 1;
	std::cin >> t;
	while (t--)
	{
		std::string s;
		std::cin >> s;
		std::cout << "#" << i << " ";
		for (int i = 0; i < str(s).size(); i++)
		{
			std::cout << str(s)[i];
		}
		std::cout << std::endl;
		i++;
	}

	return 0;
}

std::vector<char> str(std::string s)
{
	std::vector<char> s1;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != 'a' && s[i] != 'e' && s[i] != 'o' && s[i] != 'i' && s[i] != 'u') s1.push_back(s[i]);
	}
	
	return s1;
}