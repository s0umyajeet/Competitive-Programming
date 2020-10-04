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
		int n, s;
		cin >> n >> s;
		vector<pair<int, int>> passenger(n);

		for (int i = 0; i < n; i++) {
			cin >> passenger[i].first >> passenger[i].second;
		}

		sort(passenger.begin(), passenger.end(), greater<pair<int, int>>());

		int timer = 0;
		int next = 0;
		int currFloor = s;

		while (next <= n - 1) {
			int moveTime = currFloor - passenger[next].first;
			timer +=  moveTime;
			timer += (passenger[next].second <= timer) ? 0 : passenger[next].second - timer;
			currFloor = passenger[next].first;
			next++;
		}

		cout << timer + currFloor << endl;
	}
	return 0;
}