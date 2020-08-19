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
                char mat[n][m];
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                                cin >> mat[i][j];
                        }
                }
                vector<vector<int>> count_cc(n, vector<int>(m, 0));
                int q; cin >> q;
                while (q--) {
                        int x1, y1, x2, y2;
                        cin >> x1 >> y1 >> x2 >> y2;
                        for (int i = x1 - 1; i <= x2 - 1; i++) {
                                for (int j = y1 - 1; j <= y2 - 1; j++) {
                                        count_cc[i][j]++;
                                }
                        }
                }
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                                if (count_cc[i][j] & 1) {
                                        if (mat[i][j] == '0') mat[i][j] = '1';
                                        else mat[i][j] = '0';
                                }
                        }
                }
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                                cout << mat[i][j];
                        }
                        cout << endl;
                }        
	}
	return 0;
}