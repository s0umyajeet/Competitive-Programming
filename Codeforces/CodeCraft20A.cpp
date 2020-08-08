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
                int n, m;
                cin >> n >> m;
                int input;
                int sum = 0;
                for (int i = 0; i < n; i++) {
                        cin >> input;
                        sum += input;
                }
                cout << min(sum, m) << endl;
	}
	return 0;
}