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
		vector<string> v(n);
		for (auto &x : v) cin >>  x;
		sort(v.begin(), v.end());
		
		unordered_map<string, int> position;
		for (int i = 0; i < n; i++) {
			position[v[i]] = i + 1;
		}
		map<string, int> scoreMap;

		for (int i = 0; i < n; i++) {
			int t = 0;
			for (auto x : v[i]) {
				t += x - 'A' + 1;
			}
			scoreMap[v[i]] = t * position[v[i]];
		}

		int Q;
		cin >> Q;
		
		for (int i = 0; i < Q; i++) {
			string name;
			cin >> name;
			cout << scoreMap[name] << endl;
		}
 	}
	return 0;
}