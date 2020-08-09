#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                double d, L, v1, v2;
                cin >> d >> L >> v1 >> v2;
                cout << fixed << setprecision(10) << (double)(L - d - 0.0) / (double)(v1 + v2 + 0.00) << endl;
	}
	return 0;
}