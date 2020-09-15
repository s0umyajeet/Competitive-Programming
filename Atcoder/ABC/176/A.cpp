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
                int n, x, t;
                cin >> n >> x >> t;
                if (n % x == 0) cout << (n / x) * t << endl;
                else cout << ((n / x) + 1) * t << endl;
	}
	return 0;
}