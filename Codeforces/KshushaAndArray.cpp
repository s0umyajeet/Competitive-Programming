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
		set<int> s;
		for (int i = 0; i < n; i++) {
			int input;
			cin >> input;
			s.insert(input);
		}
		auto x = *s.begin();
		if (x == 1) cout << 1 << endl;
		else {
			for (auto itr = s.begin(); itr != s.end(); itr++) {
				if (*itr % x != 0) {
					cout << -1 << endl;
					return 0;
				}
			}
			cout << x << endl;
		}
	}
	return 0;
}