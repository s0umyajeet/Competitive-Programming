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
                int n, k;
                cin >> n >> k;
                string s;
                cin >> s;

                int max_prod = 0;
                int prod = 0;
                for (int i = 0; i < s.size() - k + 1; i++) {
                        int prod = 1;
                        for (int j = i; j < i + k; j++) {
                                prod *= s[j] - 48;
                        }
                        max_prod = max(prod, max_prod);
                }
                cout << max_prod << endl;
	}
	return 0;
}