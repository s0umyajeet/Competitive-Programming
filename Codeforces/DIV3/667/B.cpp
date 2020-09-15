#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
                float a, b, x, y, n;
                cin >> a >> b >> x >> y >> n;
                float minima = (n - b - a) / 2.0f;
                cout << minima << endl;
                cout << fixed << setprecision(0) << (a - minima) * (b - minima) << endl;
	}
	return 0;
}