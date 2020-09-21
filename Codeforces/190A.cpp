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
		cout << n + m - 1 << endl;
		for (int i = 1; i <= n; i++) {
			cout << i << " " << 1 << endl;
		}
		for (int i = 2; i <= m; i++) {
			cout << 1 << " " << i << endl;
		}
	}
	return 0;
}