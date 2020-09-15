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
		int ans = 0;
		char p;
		while (cin >> p) {
			ans += p - 48;
		}
		cout << (ans % 9 == 0 ? "YES" : "NO") << endl;
	}
	return 0;
}