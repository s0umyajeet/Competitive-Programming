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
                string a, b;
                cin >> a >> b;
                if (a == b) cout << a << endl;
                else cout << 1 << endl;
	}
	return 0;
}