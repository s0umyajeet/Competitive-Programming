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
		int n;
		cin >> n;
		char mat[n][n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> mat[i][j];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				int count = 0;
				if (i - 1 >= 0) if (mat[i - 1][j] == 'o') count++;
				if (i + 1 <= n - 1) if (mat[i + 1][j] == 'o') count++;
				if (j - 1 >= 0) if (mat[i][j - 1] == 'o') count++;
				if (j + 1 <= n - 1) if (mat[i][j + 1] == 'o') count++;
				if (count % 2 != 0) {
					cout << "NO" << endl;
					return 0;
				}
			}
		}
		cout << "YES" << endl;
	}
	return 0;
}