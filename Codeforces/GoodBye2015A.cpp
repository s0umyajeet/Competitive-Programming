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
                string s;
                cin >> n;
                getline(cin >> ws, s);
                if (s == "of week") {
                        cout << 52 << endl;
                        return 0;
                }
                if (s == "of month") {
                        if (n >= 1 && n <= 29) cout << 12 << endl;
                        else if (n == 30) cout << 11 << endl;
                        else cout << 7 << endl;
                }
	}
	return 0;
}
