#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	while (N--) {
		int a, b, c;
		cin >> a;
		cin >> b;
		c = a * (a + 1) / 2;
		if (b == c) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}
