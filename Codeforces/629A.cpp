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
                if (a % b == 0) cout << 0 << endl;
                else cout << b * (a / b + 1) - a << endl;
	}
	return 0;
}