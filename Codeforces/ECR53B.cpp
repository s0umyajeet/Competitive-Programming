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
                vector<pair<int, int>> v(n);
                for (auto &x : v) {
                        cin >> x.first;
                        x.second = -1;
                }

                vector<int> books(n);
                for (auto &x : books) cin >> x;
                for (int i = 0; i < n; i++) {
                        int count = 0;
                        if (v[books[i]].second == 1) cout << 0 << " ";
                        else {
                                for (int j = 0; ; j++) {
                                        if (v[j].second == -1) {
                                                count++;
                                                v[j].second = 1;
                                        }
                                        if (v[j].first == books[i]) break;
                                }
                                cout << count << " ";
                        }
                }
	}
	return 0;
}