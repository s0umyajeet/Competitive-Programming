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
                int d, m;
                cin >> d >> m;
                vector<int> v(m);
                for (auto &x : v) cin >> x;
                int ans = 0;
                for (int i = 1; i < m; i++) ans += d - v[i - 1];
                cout << ans << endl;
	}
	return 0;
}