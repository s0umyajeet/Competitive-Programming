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
        
        int t;
        cin >> t;

        while(t--) {
                int l, r;
                cin >> l >> r;
                if (l * 2 > r) {
                        cout << -1 << " " << -1 << endl;
                } else {
                        cout << l << " " << l * 2 << endl;
                }

        }
        return 0;
}