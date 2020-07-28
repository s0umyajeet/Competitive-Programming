#include <bits/stdc++.h>
#define int long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;
	while (t--) {
		int n, k;
        cin >> n >> k;

        while (k--) {
            if (n % 10 != 0) {
                n--;
            } else {
                n /= 10;
            }
        }
        cout << n << endl;
	}
	return 0;
}