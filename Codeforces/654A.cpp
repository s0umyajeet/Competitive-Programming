#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		if (n % 2) cout << n / 2 + 1 << endl;
		else cout << n / 2 << endl;
	}
	return 0;
}