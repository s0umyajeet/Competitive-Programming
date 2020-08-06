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
                int n;
                cin >> n;
                vector<int> v(n);
                int sum = 0;
                for (auto &x : v) {
                        cin >> x;
                        sum += x;
                }
                int avg = sum / n;
                if (avg * n < sum) cout << avg + 1 << endl;
                else cout << avg << endl;
                
	}
	return 0;
}