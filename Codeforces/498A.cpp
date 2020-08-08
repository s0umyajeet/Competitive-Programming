#include <bits/stdc++.h>
#define int long long
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
                vector<int> v(n);
                for (auto &x : v) {
                        cin >> x;
                        if (x % 2 == 0) x--;
                }
                for (auto x : v) cout << x << " ";
                cout << endl;
	}
	return 0;
}