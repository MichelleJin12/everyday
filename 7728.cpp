#include <iostream>
#include <stack>

int diversity(std::string str);
int main()
{
	int t; int i = 1;
	std::cin >> t;
	while (t--)
	{
		std::string str;
		std::cin >> str;
		std::cout << "#" << i << " " << diversity(str) << std::endl;
		i++;
	}
	return 0;
}

int diversity(std::string str)
{
	int arr[10] = { 0 }; int sum = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '0') arr[0] = 1;
		if (str[i] == '1') arr[1] = 1;
		if (str[i] == '2') arr[2] = 1;
		if (str[i] == '3') arr[3] = 1;
		if (str[i] == '4') arr[4] = 1;
		if (str[i] == '5') arr[5] = 1;
		if (str[i] == '6') arr[6] = 1;
		if (str[i] == '7') arr[7] = 1;
		if (str[i] == '8') arr[8] = 1;
		if (str[i] == '9') arr[9] = 1;
	}
	for (int i = 0; i < 10; i++)
	{
		sum += arr[i];
	}
	return sum;
}