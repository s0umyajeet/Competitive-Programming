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
		int n;
		cin >> n;
		
		vector<int> v(n);
		for (auto &x : v) cin >> x;
		
		int x, y;
		cin >> x >> y;
		
		int forward[n];
		forward[0] = v[0];
		
		for (int i = 1; i < n; i++) {
			forward[i] = v[i] + forward[i - 1];
		}

		for (int i = 1; i < n; i++) {
			int part1 = forward[i - 1];
			int part2 = forward[n - 1] - part1;
			if (part1 >= x && part1 <= y && part2 >= x && part2 <= y) {
				cout << i + 1 << endl;
				return 0;
			}
		}

		cout << 0 << endl;
	}
	return 0;
}
