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
		unordered_set<int> doneRow, doneCol;

		for (int i = 0; i < n * n; i++) {
			int r, c;
			cin >> r >> c;
			if (doneRow.find(r) == doneRow.end() && doneCol.find(c) == doneCol.end()) {
				cout << i + 1 << " ";
				doneRow.insert(r);
				doneCol.insert(c);
			}
		}
		cout << endl;
	}
	return 0;
}