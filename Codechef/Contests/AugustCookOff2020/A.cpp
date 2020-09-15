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
                int n, k;
                cin >> n >> k;
                vector<int> v(n);
                for (auto &x : v) cin >> x;
                // sort(v.begin(), v.end());
                int sum = 0;
                int count = 0;
                bool flag = false;
                for (int i = 0; i < n; i++) {
                        if (v[i] > k) {
                                flag = true;
                                break;
                        }
                        sum += v[i];
                        if (sum >= k) {
                                count++;
                                i--;
                                sum = 0;
                        }
                }
                if (!flag) cout << count + 1 << endl;
                else cout << -1 << endl;
        }
	return 0;
}


//3 3 4
//