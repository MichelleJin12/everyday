#include <iostream>
#include <stack>
int main()
{
	int t; int cursor;
	std::string s;
	std::cin >> s;
	cursor = s.size();
	std::cin >> t;
	while (t--)
	{
		char temp;
		std::cin >> temp;
		if (temp == 'L')
		{
			cursor--;
		}
		else if (temp == 'D')
		{
			cursor++;
		}
		else if (temp == 'B')
		{
			if (cursor == 0) continue;
			else
			{
				for (int i = cursor - 1; i < s.size-1; i++)
				{
					s[i] = s[i + 1];
				}
			}
		}
		else
		{
			char temp1;
			std::cin >> temp1;

			if (cursor == s.size)
			{

			}
			else
			{
				s[cursor] = temp;
				std::string temp3;
				temp3.append(s[s.size()]);
				for (int i = cursor; i < s.size()-1; i++)
				{
					char temp2 = s[i+1];
					s[i+1] = s[i];
					s[i] = temp2;
				}
				s.append(temp3);

			}

		}
		
	}
	return 0;
}