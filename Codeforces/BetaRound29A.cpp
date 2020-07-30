#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

struct camel {
        int x;
        int d;
        vector<int> m;
};

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
		int n;
                cin >> n;
                vector<camel> v(n);
                for (auto &x : v) cin >> x.x >> x.d;
                bool found = false;
                
                for (int i = 0; i < n; i++) {
                        int s = v[i].x + v[i].d;
                        for (int j = 0; j < n; j++) {
                                if (s == v[j].x) {
                                        v[j].m.push_back(i);
                                }
                        }
                }

                for (int i = 0; i < n; i++) {
                        for (int j = 0; j != v[i].m.size(); j++) {
                                if (find(v[v[i].m[j]].m.begin(), v[v[i].m[j]].m.end(), i) != v[v[i].m[j]].m.end()) {
                                        found = true;
                                        break;
                                }
                        }
                }
                if (found) cout << "YES" << endl;
                else cout << "NO" << endl;
	}
	return 0;
}