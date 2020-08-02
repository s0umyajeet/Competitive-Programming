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
                map<int, int> pos;
                for (int i = 0; i < n; i++) {
                        pos[v[i]] = i + 1;
                }
                sort(v.begin(), v.end());
                if (v.size() == 1) {
                        cout << -1 << endl;
                } else if (v.size() == 2 && v[0] == v[1]) {
                        cout << -1 << endl;
                } else {
                        cout << 1 << endl;
                        cout << pos[v[0]] << endl;
                }
	}
	return 0;
}