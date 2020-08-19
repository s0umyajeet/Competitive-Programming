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
                int n;
                cin >> n;
                vector<int> v(n);
                int minOdd = 999999999;
                int sum = 0;
                for (int i = 0; i < n; i++) {
                        cin >> v[i];
                        sum += v[i];
                        if (v[i] & 1) minOdd = min(minOdd, v[i]);
                }
                if (sum % 2 == 0) cout << sum << endl;
                else cout << sum - minOdd << endl; 
	}
	return 0;
}