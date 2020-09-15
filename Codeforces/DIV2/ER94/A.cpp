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
                string s;
                cin >> s;
                string w;
                for (int i = 0, j = 0; i < n; i++, j++) {
                        string x = s.substr(i, n);
                        w += x[j];
                }
                cout << w << endl;
	}
	return 0;
}