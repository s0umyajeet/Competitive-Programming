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
                string sample = string(m, '.');
                vector<string> v(n, sample);
                vector<string> ans = v;
                
                cout << v.size() << endl;
                cout << v[0].size() << endl;
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                                cout << v[i][j];
                        }
                        cout << endl;
                }

                // for (auto x : v) {
                //         for (auto j : x) {
                //                 cout << j << " ";
                //         }
                //         cout << endl;
                // }

                for (int i = 0; i < m; i++) {
                        int countApples = 0;
                        int hObstacle = -1;
                        for (int j = 0; j < n; j++) {
                                if (v[j][i] == '#') hObstacle = max(hObstacle, j);
                                if (v[j][i] == 'a') countApples++;
                        }
                        if (hObstacle == -1) {
                                ans[i] = string(n - countApples, '.') + string(countApples, 'a');
                        } else {
                                ans[i] = string(hObstacle - countApples, '.') + string(1, '#') + string(n - 1 - hObstacle, '.');
                        }
                }
                // for (int i = 0; i < m; i++) {
                //         for (int j = 0; j < n; j++) {
                //                 cout << ans[j][i];
                //         }
                //         cout << endl;
                // }
        }
	return 0;
}