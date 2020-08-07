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
                int a, b, c, n;
                cin >> a >> b >> c >> n;
                int total = a + b + c + n;
                if (total % 3 == 0 && total / 3 >= a && total / 3 >= b && total / 3 >= c) 
                        cout << "YES" << endl;
                else cout << "NO" << endl;
	}
	return 0;
}
