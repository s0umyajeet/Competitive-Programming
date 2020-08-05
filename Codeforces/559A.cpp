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
                int n;
                cin >> n;
                string s;
                cin >> s;
                int count = 0;
                for (int i = 0; i < n; i++) {
                        if (s[i] == '-') {
                                if (count != 0) count--;
                        } else count++;
                }
                if (count < 0) cout << 0 << endl;
                else cout << count << endl;
	}
	return 0;
}