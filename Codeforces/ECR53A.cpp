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

                for (int i = 0; i < s.size() - 1; i++) {
                        if (s[i] != s[i + 1]) {
                                cout << "YES" << endl;
                                cout << s[i] << s[i + 1] << endl;
                                return 0;
                        }
                }
                cout << "NO" << endl;
	}
	return 0;
}