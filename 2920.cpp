//À½°è

#include <iostream>

int main()
{
	int arr[8];
	for (int i = 0; i < 8; i++)
	{
		std::cin >> arr[i];
	}
	for (int i = 0; i < 7; i++)
	{
		if (arr[i + 1] == arr[i] + 1)
		{
			if(i == 6)
				std::cout << "ascending" << std::endl;
		}
		else if (arr[i] == arr[i + 1] + 1)
		{
			if(i == 6)
				std::cout << "descending" << std::endl;
		}
		else
		{
				std::cout << "mixed" << std::endl;
				break;
		}
	}

	return 0;
}