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
                int n;
                cin >> n;
                vector<int> v(n);
                for (auto &x : v) cin >> x;
                int maxx = v[0];
                int ans = 0;
                for (int i = 0; i < n; i++) {
                        if (v[i] < maxx) {
                                ans += maxx - v[i];
                        } else maxx = v[i];
                } 
                cout << ans << endl;
	}
	return 0;
}