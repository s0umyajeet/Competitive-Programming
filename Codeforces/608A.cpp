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
                int a, b, c, d, e, f;
                cin >> a >> b >> c >> d >> e >> f;

                int cost1 = 0;
                int cost2 = 0;
                if (a < d) {
                        cost1 += a * e;
                        d -= a;
                        cost2 += min({a, c, d}) * f;
                }
                coutans << min(a, d) * e + min(b, c) * f << endl;
        }
        return 0;
}