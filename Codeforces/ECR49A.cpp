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
                string s;
                cin >> s;

                bool fail = false;
                for (int i = 0; i < n / 2; i++) {
                        if (abs(s[i] - s[n - 1 - i]) != 2 && s[i] != s[n - 1 - i]) {
                                fail = true;
                        }
                }
                if (!fail) cout << "YES" << endl;
                else cout << "NO" << endl;
	}
	return 0;
}