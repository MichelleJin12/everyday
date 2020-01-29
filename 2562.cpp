//ÃÖ´ñ°ª

#include <iostream>

int main()
{
	int arr[9];
	for (int i = 0; i < 9; i++)
	{
		std::cin >> arr[i];
	}
	int temp = arr[0]; int a;
	for (int i = 0; i < 9; i++)
	{
		
		if (arr[i] >= temp)
		{
			temp = arr[i];
			a = i;
		}
	}
	std::cout << temp << std::endl;
	std::cout << a+1 << std::endl;

	return 0;
}