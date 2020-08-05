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
                int n, h, m;
                cin >> n >> h >> m;
                vector<int> building_heights(n + 1, h);
                int profit = 0;
                for (int i = 0; i < m; i++) {
                        int l, r, x;
                        cin >> l >> r >> x;
                        for (int i = l; i <= r; i++) {
                                building_heights[i] = min(building_heights[i], x);
                        }
                }

                for (int i = 1; i <= n; i++) {
                        profit += building_heights[i] * building_heights[i];
                }
                cout << profit << endl;
        }
	return 0;
}