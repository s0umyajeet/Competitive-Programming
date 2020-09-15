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
                int a, b;
                cin >> a >> b;
                int ta, tb;
                cin >> ta >> tb;
                vector<vector<char>> v(n, vector<char>(m));
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                                cin >> v[i][j];
                        }
                }
                a--, b--;
                ta--, tb--;
	}
	return 0;
}