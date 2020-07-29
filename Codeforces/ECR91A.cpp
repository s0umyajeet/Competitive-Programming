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
		int n;
                cin >> n;
                vector<int> v(n);
                for (auto &x : v) cin >> x;
                bool found = false;
                for (int i = 0; i < n; i++) {
                        for (int j = i + 1; j < n; j++) {
                                for (int k = j + 1; k < n; k++) {
                                        if (v[i] < v[j] && v[j] > v[k]) {
                                                found = true;
                                                cout << "YES" << endl;
                                                cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
                                                break;
                                        }
                                        if (found) break;
                                }
                                if (found) break;
                        }
                        if (found) break;
                }
                if (!found) cout << "NO" << endl;
	}
	return 0;
}