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
                int n, d;
                cin >> n >> d;
                vector<int> v(n);
                for (auto &x : v) cin >> x;
                int cost = 0;
                for (int i = 1; i < n; i++) {
                        int diff = 0;
                        if (v[i] <= v[i - 1]) {
                                diff = (abs(v[i] - v[i - 1]) + 1);
                                if (diff % d == 0) {
                                        v[i] += (diff / d) * d;
                                        cost += diff / d;
                                } else {
                                        v[i] += (diff / d + 1) * d;
                                        cost += diff / d + 1;
                                }                                
                        }
                }
                // for (auto x : v) cout << x << ' ';
                cout << cost << endl;
	}
	return 0;
}