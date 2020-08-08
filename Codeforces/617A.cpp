#include <bits/stdc++.h>
#define int long long
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
                int input;
                int odd = 0;
                int even = 0;
                for (int i = 0; i < n; i++) {
                        cin >> input;
                        if (input & 1) odd++;
                        else even++;
                }
                if (odd == 0) cout << "NO" << endl;
                else {
                        if (n == odd) {
                                if (n % 2 == 0) cout << "NO" << endl;
                                else cout << "YES" << endl;
                        } else cout << "YES" << endl;
                }
	}
	return 0;
}