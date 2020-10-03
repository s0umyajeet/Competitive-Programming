#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	// cin >> n_Cases;]

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
		int n;
		cin >> n;
		vector<int> v(n);
		for (auto &x : v) cin >> x;
		int startIndex = find(v.begin(), v.end(), 1) - v.begin();
		int changes = 0;
		for (int i = startIndex; i < n - 1; i++) {
			if (v[i] == 1 && find(v.begin() + i + 1, v.end(), 1) != v.end() && v[i + 1] == 0) 
				changes++;
		}
		cout << count(v.begin(), v.end(), 1) + changes << endl;
	}
	return 0;
}