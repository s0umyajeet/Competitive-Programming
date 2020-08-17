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
                unordered_map<int, int> count;
                int v[n];
                for (int i = 0; i < n; i++) {
                        cin >> v[i];
                }
                set<int> counted;
                for (int i = 0; i < n; i++) {
                        if (counted.find(v[i]) == counted.end()) {
                                counted.insert(v[i]);
                                for (int j = 0; j < n; j++) {
                                        if (v[j] >= v[i]) {
                                                count[v[i]]++;
                                        }
                                }
                        }
                }
                int ans = -99999;
                for (auto x : count) {
                        if (x.second >= k) {
                                ans = max(ans, x.first);
                        }
                }
                cout << ans << endl;
	}
	return 0;
}