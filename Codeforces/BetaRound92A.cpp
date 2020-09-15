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
                int n, a, b;
                cin >> n >> a >> b;
                int pos = 0;
                for (int i = 1; i <= n; i++) {
                        pos += (i - 1 >= a && n - i <= b);
                }
                cout << pos << endl;
        }
	return 0;
}