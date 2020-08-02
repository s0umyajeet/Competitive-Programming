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
                int l, r;
                cin >> l >> r;
                cout << "YES" << endl;
                for (int i = l; i <= r - 1; i += 2) {
                        cout << i << " " << i + 1 << endl;
                }
	}
	return 0;
}