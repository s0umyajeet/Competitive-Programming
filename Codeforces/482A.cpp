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
                int n;
                cin >> n;
                if (n == 0) cout << 0 << endl;
                else {
                        if ((n + 1) % 2 == 0) cout << (n + 1) / 2 << endl;
                        else cout << n + 1 << endl;
                }
        }
	return 0;
}