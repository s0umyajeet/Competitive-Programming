#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                int n, a, b;
                cin >> n >> a >> b;
                vector<int> s(n);
                for (auto &x : s) cin >> x;
                int cost = 0;
                bool fail = false;

                int i = 0;
                int j = n - 1;

                while (i <= j) {
                        if (s[i] == 2 && s[j] == 2) {
                                if (i == j) cost += min(a, b);
                                else cost += 2 * min(a, b);
                        } else if (s[i] == 2 && s[j] == 1) {
                                cost += b;
                        } else if (s[i] == 1 && s[j] == 2) {
                                cost += b;
                        } else if (s[i] == 2 && s[j] == 0) {
                                cost += a;
                        } else if (s[i] == 0 && s[j] == 2) {
                                cost += a;
                        } else if (s[i] ^ s[j]) {
                                fail = true;
                                break;
                        }
                        i++;
                        j--;
                }
                if (!fail) cout << cost << endl;
                else cout << -1 << endl;
	}
	return 0;
}