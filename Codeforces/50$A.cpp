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
		int n, L, a;
		cin >> n >> L >> a;
		vector<pair<int, int>> v(n);

		for (int i = 0; i < n; i++) {
			cin >> v[i].first >> v[i].second;
		}

		int count = 0;
		
		if (n == 0) count += L / a;
		else {
			int first_gap = v[0].first - 1 - 0;
			count += first_gap / a;

			for (int i = 1; i < n; i++) {
				int gap = v[i].first - v[i - 1].second - 1;
				count += gap / a;
			}

			int last_gap = L - v[n - 1].second - 1;
			count += last_gap / a;
		}
		cout << count << endl;
	}	
	return 0;
}