#include <bits/stdc++.h>
#define int long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
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
        vector<vector<int>> v(n, vector<int>(n, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 || j == 0) v[i][j] = 1;
                else v[i][j] = v[i - 1][j] + v[i][j - 1];
            }
        }
        cout << v[n - 1][n - 1] << endl;
	}
	return 0;
}