#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int a, b, m, n;
vector<vector<int>> mat;

int colWise() {
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

int rowWise() {
        int minn = 99999999;
        for (int i = 0; i < n - a + 1; i++) {
                for (int j = 0; j < m - b + 1; j++) {
                        int trees = 0;
                        for (int dx = 0; dx < a; dx++) {
                                for (int dy = 0; dy < b; dy++) {
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

                cin >> a >> b;

                if (a == b) cout << colWise() << endl;
                else cout << min(colWise(), rowWise());	
        }
	return 0;
}