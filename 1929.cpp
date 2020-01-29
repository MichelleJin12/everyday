#include <iostream>
#define MAX 1000000

void isPrime(int, int);
int m[MAX];

int main()
{
	int a, b;
	std::cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		m[i] = a++;
	}


	return 0;
}

void isPrime(int a, int b)
{
	for (int i = a; i*i <= b; i++)
	{
		m[i];
	}

}



/*

#include <iostream>
using namespace std;
const int MAX = 1000000;
bool check[MAX+1];
int main() {
	check[0] = check[1] = true;
	for (int i=2; i*i<=MAX; i++) {
		if (check[i] == false) {
			for (int j=i+i; j<=MAX; j+=i) {
				check[j] = true;
			}
		}
	}
	int m, n;
	cin >> m >> n;
	for (int i=m; i<=n; i++) {
		if (check[i] == false) {
			cout << i << '\n';
		}
	}
	return 0;
}

*/