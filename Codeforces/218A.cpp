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
		int n, k;
		cin >> n >> k;
		
		vector<int> v(n);
		for (auto &x : v) cin >> x;

		int change = 0;

		for (int i = 0; i < k; i++) {
			vector<int> c(2);
			for (int j = 0; j < n; j += k) {
				c[v[i + j] - 1]++;
			}
			change += min(c[1], c[0]);
		}
		
		cout << change << endl;
	}
	return 0;
}