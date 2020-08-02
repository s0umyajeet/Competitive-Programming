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
		int n, m;
		cin >> n >> m;
		
		vector<int> v(n);
		int count_1 = 0;
		int count__1 = 0;
		for (auto &x : v) {
			cin >> x;
			if (x == -1) count__1++;
			if (x == 1) count_1++;
		}
	
		while (m--) {
			int l, r;
			cin >> l >> r;
			int sum = 0;
			
			if ((r - l + 1) % 2 != 0) {
				cout << 0 << endl;
			} else {
				if (count__1 >= (r - l + 1) / 2 && count_1 >= (r - l + 1) / 2) {
					cout << 1 << endl;
				} else {
					cout << 0 << endl;
				}
			}
		}
	}
	return 0;
}