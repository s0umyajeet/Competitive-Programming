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
                int c0 = 0;
                for (auto &x : v) {
                        cin >> x;
                        if (x == 0) c0++;
                }
                set<int> s1(v.begin(), v.end());
                if (c0 > 0) cout << s1.size() - 1 << endl;
                else cout << s1.size() << endl;
	}
	return 0;
}