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
		int n, x;
                cin >> n >> x;

                vector<pair<int, int>> v(n);
                set<pair<int, int>> covered;
                for (int i = 0; i < n; i++) {
                        int a, b;
                        cin >> a >> b;
                        v[i].first = min(a, b);
                        v[i].second = max(a, b);
                        if (x >= v[i].first && x <= v[i].second) covered.insert(v[i]);
                }

                sort(v.begin(), v.end());
                int dist = 0;
                for (int i = 0; i < n; i++) {
                        if (covered.find(v[i]) == covered.end()) {
                                dist += abs(x - v[i].first);
                                cout << "dist = " << dist << " by " << x << " " << v[i].first << endl;
                                x = v[i].first;
                                for (int j = 0; j < n; j++) {
                                        if (x >= v[i].first && x <= v[i].second) covered.insert(v[i]);
                                }
                        }
                }
                cout << dist << endl;
                // for (auto x : covered) cout << x.first << " " << x.second << endl;
	}
	return 0;
}