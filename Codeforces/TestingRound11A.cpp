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
		int up, down;
		cin >> up >> down;

		int n = up + down + 1;

		for (int i = 1; i <= up; i++) {
			cout << i << " ";
		}

		cout << n << " ";

		for (int j = n - 1; j >= n - down; j--) {
			cout << j << " ";
		}
		
		cout << endl;
	}
	return 0;
}