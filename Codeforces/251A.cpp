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
        // int t;
        // cin >> t;

        while(t--) {
                int n, tt;
                cin >> n >> tt;
                vector<int> v(n);
                for (auto &x : v) cin >> x;
                int total = accumulate(v.begin(), v.end(), 0);
                if (total + (n - 1) * 10 > tt) cout << -1 << endl;
                else {
                        int rem = tt - total;
                        cout << rem / 5 << endl;
                }
        }
        return 0;
}