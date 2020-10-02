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
		int a, b;
		cin >> a >> b;
		int factor = a / b;
		int hours = b * factor;
		int burned = hours;
		int remaining = a - burned;
		while (burned) {
			if (burned < b) break;
			burned /= b;
			hours += burned;
		}
		cout << hours + ((burned + remaining) % b) << endl;
	}
	return 0;
}

//123 + 24 + 4 = 151
//120 + 24 + 4