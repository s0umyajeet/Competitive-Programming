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
                int a, b;
                cin >> a >> b;
                if (min(a, b) == 1) cout << "YES" << endl;
                else if (a == 2 && b == 2) cout << "YES" << endl;
                else cout << "NO" << endl;
	}
	return 0;
}