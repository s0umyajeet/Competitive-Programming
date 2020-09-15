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
                int n, s, k;
                cin >> n >> k >> s;
                vector<int> v(n);
                for (auto &x : v) cin >> x;
                int len = k + 1;

                for (int k = len; k <= n; k++) {
                        for (int i = 0; i <= n - k; i++) {
                                cout << "for i: " << i << " and len = " << k << " : " << accumulate(v.begin() + i, v.begin() + i + k, 0) << endl;
                                if (accumulate(v.begin() + i, v.begin() + i + k, 0) > s) {
                                        cout << k << endl;
                                        return 0;
                                }
                        }
                }
                cout << -1 << endl;
	}
	return 0;
}