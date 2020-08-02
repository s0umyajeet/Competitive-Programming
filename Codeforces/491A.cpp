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
                int n, a, b, c;
                cin >> a >> b >> c >> n;

                if (n < a || n < b || n < c) {
                        cout << -1 << endl;
                } else if (c > a || c > b) {
                        cout << -1 << endl;
                } else {
                        if (n - ((a + b) - c) > 0) 
                                cout << n - ((a + b) - c) << endl;
                        else cout << -1 << endl;
                }
	}
	return 0;
}