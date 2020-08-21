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
                int a[3], b[3];
                for (int i = 0; i < 3; i++) cin >> a[i];
                for (int i = 0; i < 3; i++) cin >> b[i];
                int ans = 0;
                if (a[2] >= b[1]) {
                        ans += b[1] * 2;
                        a[2] -= b[1];
                        b[1] = 0;
                        if (a[2] + a[0] <= b[2]) {
                                ans -= (b[2] - (a[2] + a[0])) * 2;
                        }
                } else {
                        ans += a[2] * 2;
                        a[2] = 0;
                        b[1] -= a[2];
                        if (b[2] > a[0]) {
                                ans -= (b[2] - a[0]) * 2;
                        }
                }
                cout << ans << endl;            
	}
	return 0;
}