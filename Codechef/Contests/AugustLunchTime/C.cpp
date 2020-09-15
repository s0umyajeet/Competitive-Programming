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
                int n, m;
                cin >> n >> m;
                vector<int> rating(n);
                for (auto &x : rating) cin >> x;
                vector<vector<int>> rc(n, vector<int>(m));
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                                cin >> rc[i][j];
                        }
                }
                for (int i = 0; i < m; i++) {
                        vector<int> newRating = rating;
                        for (int j = 0; j < n; j++) {
                                newRating[j] += rc[j][i];
                        }
                        sort(newRating.begin(), newRating.end(), greater<int>());
                        int maxx = newRating[0];
                }
        }
	return 0;
}