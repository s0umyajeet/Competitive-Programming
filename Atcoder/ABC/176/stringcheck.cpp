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
                char ch;
                cin >> ch;
                int ans;
                while (ch != '^c') {
                        ans += ch - '0';
                        cin >> ch;
                }
                cout << ans << endl;
        }	
        return 0;
}