//최소, 최대

#include <iostream>
#include <algorithm>

int arr[1000000];
int main()
{
	int N;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		std::cin >> arr[i];
	}
	std::sort(arr, arr+N);
	std::cout << arr[0] << " " << arr[N-1];
	return 0;
}