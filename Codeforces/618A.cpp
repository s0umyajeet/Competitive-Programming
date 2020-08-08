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
                int n;
                cin >> n;
                vector<int> v(n);
                int ans = 0;
                for (auto &x : v) {
                        cin >> x;
                        if (x == 0) {
                                ans++;
                                x = 1;
                        }
                }
                if (accumulate(v.begin(), v.end(), 0) == 0) {
                        cout << ans + 1 << endl;
                } else cout << ans << endl;
	}
	return 0;
}