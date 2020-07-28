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
        int n, m;
        cin >> n >> m;

        vector<string> v(n);
        bool failed = false;
        for (auto &x : v) cin >> x;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] == v[i + 1]) {
                failed = true;
            }
        }
        if (failed) {
            NO;
        } else {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < v[i].size() - 1; j++) {
                    if (v[i][j] != v[i][j + 1])
                        failed = true;
                }
            }
            if (failed) {
                NO;
            } else YES;
        }
	}
	return 0;
}