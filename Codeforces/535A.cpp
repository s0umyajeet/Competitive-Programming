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
                int l1, r1, l2, r2;
                cin >> l1 >> r1 >> l2 >> r2;
                if (l1 + 1 == r2 - 1) {
                        cout << r1 - 1 << " " << l2 + 1 << endl;
                } else cout << l1 + 1 << " " << r2 - 1 << endl;
        }       
	return 0;
}