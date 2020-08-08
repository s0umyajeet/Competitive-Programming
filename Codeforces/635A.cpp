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
                int a, b, c, d;
                cin >> a >> b >> c >> d;
                if (a + b <= c) {
                        b += c - (a + b) + 1;
                }
                cout << a << " " << b << " " << c << endl;
        }
	return 0;
}