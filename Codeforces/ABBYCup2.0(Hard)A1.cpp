#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	// cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
                int n;
                cin >> n;
                vector<int> v(n + 1);
                for (int i = 1; i <= n; i++) {
                        cin >> v[i];
                }
                vector<int> ans(n + 1);
                ans[1] = v[1];
                for (int i = 1; i <= n; i++) {
                        int range = floor(log2(n - i));
                        v[i + pow(2, range)] += v[i];
                        if (i >= 2) ans[i] = ans[i - 1] + v[i];
                        v[i] = 0;
                }

                for (int i = 1; i < n; i++) {
                        cout << ans[i] << endl;
                }                          
	}
	return 0;
}