#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
        srand(time(0));

	int t = 1;
	// cin >> t;

	while (t--) {
                int n, d;
                cin >> n >> d;
                vector<int> arr(n);
                if (d == n) cout << -1 << endl;
                else {
                        for (int i = n; i > n - d; i--) {
                                arr[i - 1] = i;
                        }
                        for (int i = 1; i < n - d; i++) {
                                arr[i - 1] = i + 1;
                        }
                        arr[n - d - 1] = 1;
                        for (auto x: arr) cout << x << " ";
                }
                
	}
	return 0;
}