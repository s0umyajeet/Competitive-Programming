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
                int a, b;
                cin >> a >> b;
                int diff = max(b, a) - min(a, b);
                int count = 0;
                diff /= 10;
                count += diff;
                if (diff % 10 != 0) count++;
                cout << count << endl;
	}
	return 0;
}