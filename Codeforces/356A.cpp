#include <bits/stdc++.h>
#define int long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
        vector<int> v(5);
        vector<int> count(101, 0);
        int sum = 0;
        for (auto &x : v) {
            cin >> x;
            count[x]++;
            sum += x;
        }
        
        int maxx = 0;
        for (int i = 0; i < 5; i++) {
            if (count[v[i]] == 2 || count[v[i]] == 3) {
                maxx = max(count[v[i]] * v[i], maxx);
            } else if (count[v[i]] >= 3) {
                maxx = max(3 * v[i], maxx);
            }
        }
        cout << sum - maxx << endl;
	}
	return 0;
} 