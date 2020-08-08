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
                int a, b, d1, d2;
                cin >> a >> b >> d1 >> d2;
                if ((b - a) % (d1 + d2) == 0) 
                        cout << (b - a) / (d1 + d2) << endl;
                else cout << -1 << endl;
        }
	return 0;
}