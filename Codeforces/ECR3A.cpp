#include <bits/stdc++.h>
#define int     long long
#define YES     cout << "YES" << endl
#define NO      cout << "NO" << endl
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        //cin >> t;

        while(t--) {
                int n, m;
                cin >> n >> m;
                vector<int> v(n);
                for (auto &x : v) cin >> x;
                int count = 0;
                sort(v.begin(), v.end(), greater<int>());
                for (int i = 0; i < n; i++) {
                        if (m <= 0) break;
                        m -= v[i];
                        count = i;
                }
                cout << count + 1 << endl;
        }
        return 0;
}