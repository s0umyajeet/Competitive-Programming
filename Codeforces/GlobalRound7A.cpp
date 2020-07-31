#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
        srand(0);
	int t = 1;
	cin >> t;

	while (t--) {
		int n;
                cin >> n;
                if (n < 2) cout << -1 << endl;		
                else {
                        for (int i = 0; i < n - 1; i++) {
                                cout << 5;
                        }
                        cout << 7 << endl;
                }
	}
	return 0;
}