#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
                int n;
                cin >> n;
                vector<int> v(n);
                for (auto &x : v) cin >> x;
                for (int i = n - 1; i >= 0; i--) {
                        cout << v[i] << " ";
                }
                cout << endl;
	}
	return 0;
}