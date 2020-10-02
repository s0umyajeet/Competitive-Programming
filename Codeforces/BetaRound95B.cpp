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
		map<int, int> count;
		for (int i = 0; i < n; i++) {
			int input;
			cin >> input;
			count[input]++;
		}
		int ans = 0;
		for (auto x : count) {
			if (x.first < 0) {
				auto other = count.find(-1 * x.first);
				ans += x.second * (other == count.end() ? 0 : other->second);
			}
		}
		int zeroPairing = (count[0] * (count[0] - 1)) / 2;
		cout << ans + zeroPairing << endl;
	}
	return 0;
}