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
		int n, x;
		cin >> n >> x;
		int count = 0;
		int count2 = 0;

		for (int i = 1; i <= sqrt(x); i++) {
			if (x % i == 0) {
				if (i <= n && x / i <= n && i != x / i) 
					count++;
				if (i <= n && x / i <= n && i == x / i) 
					count2++;
			}
		}
		cout << (count << 1) + count2 << endl;
	}
	return 0;
}