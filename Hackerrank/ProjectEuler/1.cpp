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

                int c_3 = (n - 1) / 3;
                int c_5 = (n - 1) / 5;
                int c_15 = (n - 1) / 15;
                cout << (3 * (c_3 * (c_3 + 1)) / 2) + (5 * (c_5 * (c_5 + 1)) / 2) - (15 * (c_15 * (c_15 + 1)) / 2) << endl;
        }
	return 0;
} 