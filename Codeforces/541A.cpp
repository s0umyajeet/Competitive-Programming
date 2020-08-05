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
                int w1, h1, w2, h2;
                cin >> w1 >> h1 >> w2 >> h2;
                int big_area = (max(w1, w2) + 2) * ((h1 + h2) + 2);
                int small_area = (w1 * h1) + (w2 * h2);
                cout << big_area - small_area - (abs(w1 - w2) * h2) << endl;;
	}
	return 0;
}