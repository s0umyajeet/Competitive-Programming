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
                vector<int> v(4);
                for (auto &x : v) cin >> x;
                int sum = accumulate(v.begin(), v.end(), 0);
                if (sum & 1) cout << "NO" << endl;
	}
	return 0;
}