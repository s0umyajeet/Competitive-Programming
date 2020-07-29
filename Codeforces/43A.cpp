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
		int n;
                cin >> n;
                int j = 2;
                int prev = 2;
                cout << prev << " ";
                for (int i = 0, k = 2; i < n - 2; i++, k++) {
                        cout << (prev + k) % n << " ";
                        prev = (prev + k) % n;
                }
	}
	return 0;
}