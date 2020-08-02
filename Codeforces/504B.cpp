#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                int n, k;
                cin >> n >> k;
                int count = 0;
                

                if (n >= k) {
                        if (k % 2 == 0) {
                                cout << k / 2 - 1 << endl;
                        } else {
                                cout << k / 2 << endl;
                        }
                } else {
                        if (n < k / 2) cout << 0 << endl;
                        else cout << n - k / 2 << endl;
                }
	}
	return 0;
}