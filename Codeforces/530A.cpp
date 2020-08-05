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
                int w, h;
                cin >> w >> h;
                int u1, d1, u2, d2;
                cin >> u1 >> d1 >> u2 >> d2;

                for (int i = h; i >= 0; i--) {
                        if (w < 0) w = 0;
                        w += i;
                        if (i == d1) {
                                w -= u1;
                        } if (i == d2) {
                                w -= u2;
                        }
                }
                if (w < 0) cout << 0 << endl;
                else cout << w << endl;
	}
	return 0;
}