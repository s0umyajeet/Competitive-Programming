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
		bool oneOnBoundary = false;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				int input;
				cin >> input;
				if (input && !oneOnBoundary) {
					oneOnBoundary = (i == 0 or i == n - 1 or j == 0 or j == m - 1);
				}
			}
		}
		cout << (oneOnBoundary ? 2 : 4) << endl;
	}
	return 0;
}