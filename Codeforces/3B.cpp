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
		int n, v;
		cin >> n >> v;
		
		vector<pair<int, int>> pp(n);

		for (int i = 0; i < n; i++) {
			int first, second;
			cin >> first >> second;
			pp[i].first = second;
			pp[i].second = first;
		}

		sort(pp.begin(), pp.end(), greater<pair<int, int>>());

		//for (auto x: pp) cout << x.first << " " << x.second << endl;

		int sum = 0, ans = 0;
		vector<int> vehicles;
		int i;
		for (i = 0; v >= sum; i++) {
			sum += pp[i].second;
			vehicles.push_back(pp[i].second);
			ans += pp[i].first;
			if (sum > v) {
				sum -= pp[i].second;
				ans -= pp[i].first;
				vehicles.pop_back();
				break;
			}
		}

		if (sum == v - 1 && i != n - 1) {
			for (int j = i; j < n; j++) {
				if (pp[j].second == 1) {
					vehicles.push_back(pp[j].second);
					ans += pp[j].first;
				}
			}
		}

		cout << ans << endl;
		for (auto x : vehicles) cout << x << " ";	
	}
	return 0;
}