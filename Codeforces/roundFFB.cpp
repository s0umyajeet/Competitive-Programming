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
		string s;
		int k;
		cin >> s >> k;

		vector<int> map(26);
		int maxx = LLONG_MIN;
		for (auto &x : map) {
			cin >> x;
			maxx = max(maxx, x);
		}
		int val = 0;
		for (int i = 0; i < s.size() + k; i++) {
			val +=  (i < s.size() ? map[s[i] - 'a'] : maxx) * (i + 1);
		}
		cout << val << endl; 
	}
	return 0;
}