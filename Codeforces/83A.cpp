#include <bits/stdc++.h>
#define int     long long
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t;
        cin >> t;

        while(t--) {
                int n, m;
                cin >> n >> m;
                if (n % m == 0) cout << "YES" << endl;
                else cout << "NO" << endl;
        }
        return 0;
}