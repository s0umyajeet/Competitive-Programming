#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	// cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
		int n, m;
		cin >> n >> m;

		int n_1 = 0, n_2 = 0;
		n_2 = n / 2;
		n_1 = n - (n_2 * 2);

		while (1) {
			if ((n_1 + n_2) % m == 0) {
				cout << n_1 + n_2 << endl;
				return 0;
			}
			if (n_2 == 0) break;
			n_2--;
			n_1 = n - (n_2 * 2);
		}
		cout << -1 << endl;
	}
	return 0;
}