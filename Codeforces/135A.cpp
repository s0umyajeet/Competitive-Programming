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
                int k;
		cin >> k;
		string s;
		cin >> s;

		vector<int> count(26, 0);
		
		for (auto x: s) count[x - 'a']++;
		bool fail = false;
		
		for (int i = 0; i < count.size(); i++) {
			if (count[i] % k) {
				fail = true;
				break;
			}
		}
		
		if (fail) cout << -1 << endl;
		else {
			sort(s.begin(), s.end());
			for (int i = 0; i < k; i++) {
				for (int j = 0; j < count.size(); j++) {
					for (int t = 0; t < count[j] / k; t++) {
						cout << (char)(j + 'a');
					}
				} 
			}
		}
	}
	return 0;
}