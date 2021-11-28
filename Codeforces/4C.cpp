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

		map<string, int> cnt_map;
		vector<string> result;

		for (int i = 0; i < n; i++) {
			string name;
			cin >> name;

			if (cnt_map.find(name) == cnt_map.end()) {
				cnt_map.insert({name, 0});
				result.push_back("OK");
			} else {
				cnt_map[name]++;
				result.push_back(name + to_string(cnt_map[name]));
			}
		}

		for (auto x : result) cout << x << endl;
	}
	return 0;
}