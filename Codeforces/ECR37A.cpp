#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
		int n, k;
                cin >> n >> k;
                vector<int> locations(k);
                for (auto &x : locations) cin >> x;
                int max_gap = -9999;
                sort(locations.begin(), locations.end());
                max_gap = max(max_gap,  locations[0]);
                // cout << max_gap << endl;
                for (int i = 0; i < k - 1; i++) {
                        int local_gap = abs(locations[i] - locations[i + 1]);
                        if (local_gap % 2 == 0) local_gap = local_gap / 2 + 1;
                        else local_gap = local_gap / 2 + 2;
                        max_gap = max(max_gap, local_gap);
                        // cout << max_gap << endl;
                }
                // for (auto x : locations) cout << x << " ";
                // cout << n - locations[k - 1] + 1 << endl;
                max_gap = max(max_gap, n - locations[k - 1] + 1);
                coutans << max_gap << endl;
	}
	return 0;
}