#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	// cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
		int n, m;
		char c;
		cin >> n >> m >> c;

		char mat[n][m];
		
		pair<int, int> loc{INT_MAX, INT_MAX};
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> mat[i][j];
				if (mat[i][j] == c)  
					loc = {min(i, loc.first), min(j, loc.second)};
			}
		}

		set<char> ss;

		for (int i = loc.first; i < n; i++) {
			for (int j = loc.second; j < m; j++) {
				if (mat[i][j] == c) {
					if (i - 1 >= 0) ss.insert(mat[i - 1][j]);
					if (i + 1 < n) ss.insert(mat[i + 1][j]);
					if (j - 1 >= 0) ss.insert(mat[i][j - 1]);
					if (j + 1 < m) ss.insert(mat[i][j + 1]);
				} 
			}
		}


		ss.erase(c);
		ss.erase('.');
		cout << ss.size() << endl;

	}
	return 0;
}