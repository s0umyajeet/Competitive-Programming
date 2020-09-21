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
		int n, d;
		cin >> n >> d;
		vector<int> v(n);
		for (auto &x : v) cin >> x;
		sort(v.begin(), v.end());
		int m;
		cin >> m;
		if (m <= n) {
			cout << accumulate(v.begin(), v.begin() + m, 0) << endl;
		} else {
			cout << accumulate(v.begin(), v.end(), 0) - (m - n) * d << endl;
		}
	}
	return 0;
}