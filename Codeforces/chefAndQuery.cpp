#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin >> t;

	while (t--) {
		long long n, k;
		cin >> n >> k;

		long long Q[n];
		int sum = 0;
		
		for (int i = 0; i < n; i++) {
			cin >> Q[i];
			sum += Q[i];
		}
		
		bool found = false;
		for (int i = 0; i < n; i++) {
			if (Q[i] < k) {
				cout << i + 1 << endl;
				found = true;
				break;
			} else {
				if (i < n) {
					Q[i + 1] += Q[i] - k;
				}
			}
		}

		if (!found) {
			cout << sum / k + 1 << endl;
		}
	}
	return 0;
}

