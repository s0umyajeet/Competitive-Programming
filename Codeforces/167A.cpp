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
		int count = 0;
		for (int i = 0; i < n; i++) {
			int input;
			cin >> input;
			count += input;
		}
		int ans = 0;
		for (int i = 1; i <= 5; i++) {
			if ((count + i) % (n + 1) != 1) ans++;
		}
		cout << ans << endl;
	}

	return 0;
}