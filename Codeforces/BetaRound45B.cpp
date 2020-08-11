#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int m, n;
vector<vector<int>> mat;

int solve(int a, int b) {
        int minn = 99999999;
        for (int i = 0; i < n - b + 1; i++) {
                for (int j = 0; j < m - a + 1; j++) {
                        int trees = 0;
                        for (int dx = 0; dx < b; dx++) {
                                for (int dy = 0; dy < a; dy++) {
                                        if (mat[i + dx][j + dy]) trees++;
                                }
                        }
                        minn = min(minn, trees);
                }
        }
        return minn;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                cin >> n >> m;
                mat.resize(n, vector<int>(m));

                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                                cin >> mat[i][j];
                        }
                }
                int a, b;
                cin >> a >> b;
                cout << min(solve(a, b), solve(b, a)) << endl;
        }
	return 0;
}