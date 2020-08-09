#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int n, m;
pair<int, int> pos_0;
int ans = 0;

void fun(vector<vector<char>> &v, int i, int j) {
        int count = 0;
        for (int dx = 0; dx < 2; dx++) {
                for (int dy = 0; dy < 2; dy++) {
                        if (v[i + dx][j + dy] == '1') {
                                count++;
                        } else {
                                pos_0 = {i + dx, j + dy};
                        }
                }
        }
        if (count % 2 == 0) {
                v[pos_0.first][pos_0.second] = '1';
                ans++;
        }
        cout << "count of 1 for sq mata at " << i << " " << j << " " << count << endl;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                int n, m;
                cin >> n >> m;
                vector<vector<char>> v(n, vector<char>(m));
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                                cin >> v[i][j];
                        }
                }
                int ans = 0;
                for (int i = 0; i < n - 1; i++) {
                        for (int j = 0; j < m - 1; j++) {
                                fun(v, i, j);                                
                        }
                }

                bool fail = false;
                for (int i = 0; i < n - 1; i++) {
                        for (int j = 0; j < m - 1; j++) {
                                int count = 0;
                                pair<int, int> pos_0;
                                for (int dx = 0; dx < 2; dx++) {
                                        for (int dy = 0; dy < 2; dy++) {
                                                if (v[i + dx][j + dy] == '1') {
                                                        count++;
                                                }
                                        }
                                }
                                if (count % 2 == 0) {
                                        fail = true;
                                }
                        }
                }
                if (fail) cout << -1 << endl;
                else cout << ans << endl;
	}
	return 0;
}