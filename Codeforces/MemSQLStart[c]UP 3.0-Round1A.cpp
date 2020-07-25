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
                int n;
                cin >> n;
                vector<int> v(n);
                int maxx = -99999;
                for (auto &x : v) {
                        cin >> x;
                        maxx = max(x, maxx);
                }

                if (maxx <= 25) cout << 0 << endl;
                else cout << maxx - 25 << endl;
        }
        return 0;
}