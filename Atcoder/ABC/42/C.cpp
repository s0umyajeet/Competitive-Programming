#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {

	int n, m, hash = 0;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int val;
		cin >> val;
		hash |= (1 << val);
	}

	while (1) {
		int val = 0;
		for (int x = n; x > 0; x /= 10) {
			val |= (1 << ( x % 10 ));
		}
		if ((val & hash) == 0) {
			cout << n << endl;
			break;
		}
		n++;
	}
	return 0;
}