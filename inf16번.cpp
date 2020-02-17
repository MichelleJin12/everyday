#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	char arr1[101];
	char arr2[101];
	char tmp;
	cin >> arr1;
	cin >> arr2;
	for (int i = 0; i < sizeof(arr1); i++) {
		for (int j = 1; j < sizeof(arr1); j++) {
			if (arr1[i] > arr1[j]) {
				tmp = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = tmp;
			}
		}
	}

	for (int i = 0; i < sizeof(arr1); i++) {
		for (int j = 1; j < sizeof(arr1); j++) {
			if (arr2[i] > arr2[j]) {
				tmp = arr2[i];
				arr2[i] = arr2[j];
				arr2[j] = tmp;
			}
		}
	}

	for (int i = 0; i < sizeof(arr1); i++) {
		if (arr1[i] != arr2[i]) {
			cout << "NO";
			break;
		}
		else if (i == sizeof(arr1) - 1) cout << "YES";
	}

	return 0;
}

//이렇게 쓰레기같이 풀라고 낸 문제가 아닌것 같지만 어쨌든 다 맞았다.
