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
                int n;
                cin >> n;
                string s;
                cin >> s;
		int dx = 0, dy = 0;
                for (auto x : s) {
                        if (x == 'L') dx--;
                        if (x == 'R') dx++;
                        if (x == 'U') dy++;
                        if (x == 'D') dy--;
                }
                cout << n - (abs(dx) + abs(dy)) << endl;
	}
	return 0;
}