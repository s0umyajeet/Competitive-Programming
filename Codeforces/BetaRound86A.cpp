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
		int n, k;
                cin >> n >> k;

                int count = 0;
                while (k != 1) {
                        if (k % n == 0) {
                                k /= n;
                                count++;
                        } else {
                                cout << "NO" << endl;
                                return 0;
                        } 
                }

                cout << "YES" << endl;
                cout << --count << endl; 
	}
	return 0;
}