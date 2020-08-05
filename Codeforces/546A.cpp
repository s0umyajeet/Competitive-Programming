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
                int n;
                cin >> n;
                vector<pair<int, int>> chap(n);
                for (auto &x : chap) cin >> x.first >> x.second;
                int k;
                cin >> k;
                int count = 0;
                for (int i = 0; i < n; i++) {
                        if (k - 1 >= chap[i].second) {
                                count++;
                        }
                }
                cout << n - count << endl;
	}
	return 0;
}