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
		int n;
		cin >> n;
		int ans = 1;
		map<int, int> count;
		for (int i = 0; i < n; i++) {
			int h, m;
			cin >> h >> m;
			int t = 60 * h + m;
			count[t]++;
		}
		for (auto x : count) ans = max(ans, x.second);
		cout << ans << endl;
	}
	return 0;
}