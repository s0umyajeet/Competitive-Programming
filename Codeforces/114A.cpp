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
                int n, x, y;
                cin >> n >> x >> y;
                double p = ceil((y / 100.0) * n);
                cout << (p > x ? p - x : 0) << endl;
	}
	return 0;
}