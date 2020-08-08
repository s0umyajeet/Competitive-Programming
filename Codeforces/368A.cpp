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
                int n, m;
                cin >> n >> m;
                set<char> s = {'C', 'M', 'Y'};
                bool bnw = true;
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                                char c;
                                cin >> c;
                                if (s.find(c) != s.end()) bnw = false;
                        }
                }
                if (!bnw) cout << "#Color" << endl;
                else cout << "#Black&White" << endl;
	}
	return 0;
}