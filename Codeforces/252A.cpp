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
		vector<pair<int, int>> seller(n);
		for (int i = 0; i < n; i++) {
			int k;
			cin >> k;
			int minPrice = 999999999;
			for (int j = 0; j < k; j++) {
				int price;
				cin >> price;
				minPrice = min(price, minPrice);
			}
			seller[i] = {i + 1, minPrice};
		}
		sort(seller.begin(), seller.end());
		vector<int> ansVec;
		for (int i = 0; i < n; i++) {
			if (seller[i].second < v)
				ansVec.push_back(seller[i].first);
		}
		cout << ansVec.size() << endl;
		for (auto x: ansVec) cout << x << " ";
	}
	return 0;
}
