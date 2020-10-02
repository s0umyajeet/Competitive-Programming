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
		int n, c;
		cin >> n >> c;
		vector<int> v(n);
		for (auto &x : v) cin >> x;
		int maxProfit = -9999;
		for (int i = 0; i < n - 1; i++) {
			maxProfit = max(maxProfit, v[i] - v[i + 1] - c);
		}
		cout << (maxProfit >= 0 ? maxProfit : 0) << endl;
	}
	return 0;
}