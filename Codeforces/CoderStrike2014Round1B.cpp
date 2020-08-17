#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                int n, k;
                cin >> n >> k;
                vector<int> v(n);
                for (auto &x : v) cin >> x;
                sort(v.begin(), v.end());
                int ans = -999999;
                for (int i = 0; i < n; i++) {
                        auto itr = lower_bound(v.begin(), v.end(), v[i]);
                        if (v.end() - itr >= k) ans = max(ans, v[i]);
                }
                cout << ans << endl;
	}
	return 0;
}