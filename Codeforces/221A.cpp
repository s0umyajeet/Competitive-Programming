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
                string s;
                cin >> s;
                int l = 0;
                int r = 0;
                auto loc = s.find('^');
                for (int i = 0; i < s.size(); i++) {
                        if (s[i] >= '1' && s[i] <= '9') {
                                if (i < loc) l += (s[i] - '0') * (loc - i);
                                else r += (s[i] - '0') * (i - loc);
                        }
                }
                cout << loc << endl;
                cout << l << " " << r << endl;
                if (l == r) cout << "balance" << endl;
                else if (l > r) cout << "left" << endl;
                else cout << "right" << endl;
        }
	return 0;
}