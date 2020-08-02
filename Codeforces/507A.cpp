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
                int n, a, b;
                cin >> n >> a >> b;
                vector<int> s(n);
                for (auto &x : s) cin >> x;
                int cost = 0;
                bool fail = false;


                if (n % 2 == 0) {
                        for (int i = 0; i < n / 2; i++) {
                                if (s[i] == 2 && s[n - 1 - i] == 2) {
                                        cost += 2 * min(a, b);
                                } else if (s[i] == 2 && s[n - 1 - i] == 1) {
                                        cost += b;
                                } else if (s[i] == 2 && s[n - 1 - i] == 0) {
                                        cost += a;
                                } else if (s[i] == 1 && s[n - 1 - i] == 2) {
                                        cost += b;
                                } else if (s[i] == 0 && s[n - 1 - i] == 2) {
                                        cost += a;
                                } else if (s[i] == 1 ^ s[n - 1 - i]) {
                                        fail = true;
                                        break;
                                }
                        }
                } else {
                        for (int i = 0; i <= n / 2; i++) {
                                if (s[i] == 2 && s[n - 1 - i] == 2) {
                                        if (i == n / 2) {
                                                cost += min(a, b);
                                        } else cost += 2 * min(a, b);
                                } else if (s[i] == 2 && s[n - 1 - i] == 1) {
                                        cost += b;
                                } else if (s[i] == 2 && s[n - 1 - i] == 0) {
                                        cost += a;
                                } else if (s[i] == 1 && s[n - 1 - i] == 2) {
                                        cost += b;
                                } else if (s[i] == 0 && s[n - 1 - i] == 2) {
                                        cost += a;
                                } else if (s[i] == 1 ^ s[n - 1 - i]) {
                                        fail = true;
                                        break;
                                }
                        }
                } 

                if (fail) {
                        cout << -1 << endl;
                } else {
                        cout << cost << endl;
                } 
	}
	return 0;
}