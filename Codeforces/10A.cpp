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
		int n, p1, p2, p3, t1, t2;
                cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
                vector<pair<int, int>> work(n);
                for (auto &x : work) cin >> x.first >> x.second;
                int power = 0;
                for (int i = 0; i < n; i++) {
                        power += (work[i].second - work[i].first) * p1;
                        if (i != n - 1) {
                                int gap = work[i + 1].first - work[i].second;
                                if (gap <= t1) {
                                        power += gap * p1;
                                } else if (gap > t1 && gap <= t2) {
                                        power += t1 * p1;
                                        power += (gap - t1) * p2;
                                } else {
                                        power += t1 * p1;
                                        power += t2 * p2;
                                        power += (gap - (t1 + t2)) * p3;
                                }
                        }
                }
                cout << power << endl;
        }
	return 0;
}