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
                vector<int> v(n);
                for (auto &x : v) cin >> x;

                if (v[0] != 0) {
                        cout << 1 << endl;
                        return 0;
                }
                int maxx = 0;
                for (int i = 1; i < n; i++) {
                        if (v[i] <= maxx + 1) {
                                maxx = max(v[i], maxx);
                        } else {
                                cout << i + 1 << endl;
                                return 0;
                        }
                }
                cout << -1 << endl;
	}
	return 0;
}