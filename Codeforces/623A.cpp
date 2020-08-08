#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
                int a, b, x, y;
                cin >> a >> b >> x >> y;
                int area1 = (a) * (b - y - 1);
                int area2 = (a) * (y);
                int area3 = (b) * (a - x - 1);
                int area4 = (b) * (x);
                cout << max({area1, area2, area3, area4}) << endl;
	}
	return 0;
}