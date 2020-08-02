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
                int n, m, a, b;
                cin >> n >> m >> a >> b;
                if (n % m == 0) cout << 0 << endl;
                else {
                        int factor = n / m;
                        factor++;
                        int build_cost = ((m * factor) - n) * a;
                        int break_cost = (n % m) * b;
                        cout << min(build_cost, break_cost) << endl;
                }
	}
	return 0;
}