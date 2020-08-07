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
                int x, y, a, b;
                cin >> x >> y >> a >> b;
                int i = 0;
                int begin1 = x;
                int begin2 = y;
                bool flag = false;
                while (x < y) {
                        x = begin1 + (i) * a;
                        y = begin2 + (i) * (-b);
                        if (x == y) {
                                cout << i << endl;
                                flag = true;
                                break;
                        }	
                        i++;
                }
                if (!flag) cout << -1 << endl;
        }
	return 0;
}