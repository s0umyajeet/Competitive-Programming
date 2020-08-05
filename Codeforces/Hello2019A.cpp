#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
		string s;
		cin >> s;
		vector<string> v(5);
		for (auto &x : v) cin >> x;

		for (int i = 0; i < 5; i++) {
			if (s[0] == v[i][0] || s[1] == v[i][1]) {
				cout << "YES" << endl;
				return 0;
			}
		}
		cout << "NO" << endl;
	}
	return 0;
}