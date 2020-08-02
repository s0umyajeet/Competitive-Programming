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
                vector<pair<int, int>> v(n);
                for (int i = 0; i < n; i++) {
                        cin >> v[i].first >> v[i].second;
                }
        
                for (int i = 1; i < n; i++) {
                        if (min(v[i].first, v[i].second) > max(v[i - 1].first, v[i - 1].second)) {
                                cout << "NO" << endl;
                                return 0;
                        }
                }
                cout << "YES" << endl;
	}
	return 0;
}