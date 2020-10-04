#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	// cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
		int n, x;
		cin >> n >> x;

		vector<pair<int, int>> times(n);

		for (int i = 0; i < n; i++) {
			cin >> times[i].first >> times[i].second;
		}

		int start = 1;
		int end = times[n - 1].second;
		int curr = 0;
		int watchTime = 0;

		while (start < end) {
			if (start + x < times[curr].first) {
				start += x;
			} else {
				watchTime++;
				start++;
			}
		}
	}
	return 0;
}