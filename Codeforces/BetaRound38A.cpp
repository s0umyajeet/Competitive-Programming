#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
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
                vector<int> v(n - 1);
                for (auto &x : v) cin >> x;
                int a, b;
                cin >> a >> b;
                int ans = 0;
                for (int i = a - 1; i < b - 1; i++) {
                        ans += v[i];
                }
                cout << ans << endl;
	}
	return 0;
}