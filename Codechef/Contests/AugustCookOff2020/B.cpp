#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int solve(int n) {
        if (n < 3) return 0;
        else return n + solve(floor(n / 2));
}
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
                int n;
                cin >> n;
                for (int i = 0; i < n; i++) {
                        int a, b;
                        cin >> a >> b;
                }
                cout << solve(n) << endl;
	}
	return 0;
}