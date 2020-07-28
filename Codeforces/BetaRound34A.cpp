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

                int minn = 9999;
                int min_i = 0;
                int min_j = 0;
                for (int i = 0; i < n - 1; i++) {
                        if (minn > abs(v[i] - v[i + 1])) {
                                minn = abs(v[i] - v[i + 1]);
                                min_i = i + 1;
                                min_j = i + 2;
                        }
                }
                if (abs(v[n - 1] - v[0]) < minn) {
                        min_i = n;
                        min_j = 1;
                }
                cout << min_i << " " << min_j;
	}
	return 0;
}