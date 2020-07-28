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
        int minn = 99999;
        for (auto &x : v) {
            cin >> x;
            minn = min(minn, x);
        }
        bool found = false;
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++) {
            if (v[i] > minn) {
                cout << v[i] << endl;
                found = true;
                break;
            }
        }
        if (!found) cout << "NO" << endl;
	}
	return 0;
}