#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
                int n, m;
                cin >> n >> m;

                vector<string> v(n);
                int countt = 0;
                for (int i = 0; i < n; i++) {
                        cin >> v[i];
                }
                
                countt += count(v[n - 1].begin(), v[n - 1].end(), 'D');
                for (int i = 0; i < n; i++) {
                        if (v[i][m - 1] == 'R') countt++;
                }

                cout << countt << endl;
	}
	return 0;
}