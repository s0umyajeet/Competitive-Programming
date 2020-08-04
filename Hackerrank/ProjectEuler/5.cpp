#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
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
                int lcm = 1;
                int hcf;      
                for (int i = 1; i <= n; i++) {
                        lcm = (i * lcm) / __gcd(i, lcm);
                }
                cout << lcm << endl;
	}
	return 0;
}