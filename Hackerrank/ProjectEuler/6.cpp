#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
                int n;
                cin >> n;
                cout << abs(((n * (n + 1)) / 2) * ((n * (n + 1)) / 2) - ((n * (n + 1) * (2 * n + 1)) / 6)) << endl; 
	}
	return 0;
}