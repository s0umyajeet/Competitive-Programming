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
		int input;
		int minn = LLONG_MAX;
		for (int i = 0; i < n; i++) {
			cin >> input;
			minn = min(minn, input);
		}
		cout << (minn == 1 ? -1 : 1) << endl;
	}
	return 0;
}