#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

bool isLucky(int n) {
        string s = to_string(n);
        for (auto x : s) {
                if (x != '4' && x != '7')
                        return false;
        }
        return true;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
		int n;
                cin >> n;

                for (int i = 4; i <= n; i++) {
                        if (isLucky(i) && n % i == 0) {
                                cout << "YES" << endl;
                                return 0;
                        }
                }
                cout << "NO" << endl;
	}
	return 0;
}