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
                int n, a, b;
                cin >> n >> a >> b;

                if (2 * a <= b) {
                        cout << n * a << endl;
                } else {
                        cout << n / 2 * b + (n % 2) * a << endl;
                }
	}
	return 0;
}