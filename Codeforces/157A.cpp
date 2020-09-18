#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

vector<string> v(8);

bool check1(int i) {
	for (int j = 1; j < 8; j++) {
		if (v[i][j] == v[i][j - 1])
			return false;
	}
	return true;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	// cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
		for (int i = 0; i < 8; i++) cin >> v[i];
		bool fail = false;
		for (int i = 0; i < 8; i++) {
			fail = check1(i);
			if (fail == false) {
				cout << "NO" << endl;
				return 0;
			}
		}
		cout << "YES" << endl;
	}
	return 0;
}