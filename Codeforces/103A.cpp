#include <bits/stdc++.h>
#define int long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
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
        int maxx = -999;
        int minn = 999;
        for (auto &x : v) {
            cin >> x;
            maxx = max(maxx, x);
            minn = min(minn, x);
        }
        int loc_max;
        for (int i = 0; i < n; i++) {
            if (v[i] == maxx) {
                loc_max = i;
                break;
            }
        }
        int loc_min;
        for (int i = n - 1; i >= 0; i--) {
            if (v[i] == minn) {
                loc_min = i;
                break;
            }
        }
        if (loc_max > loc_min) {
            cout << loc_max + n - loc_min - 2 << endl;
        } else {
            cout << loc_max + n - loc_min - 1 << endl;
        }
	}
	return 0;
}