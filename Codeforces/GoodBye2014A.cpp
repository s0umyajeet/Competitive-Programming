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
		int n, t;
		cin >> n >> t;
		vector<int> v(n - 1);
		for (auto &x : v) cin >> x;
		int next = 0;
		while (next <= t - 1) {
			if (next + v[next] == t - 1) {
				cout << "YES" << endl;
				return 0;
			} else next += v[next];
		}
		cout << "NO" << endl;
	}
	return 0;
}