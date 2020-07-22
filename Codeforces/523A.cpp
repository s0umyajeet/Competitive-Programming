#include <bits/stdc++.h>
#define int     long long
#define YES     cout << "YES" << endl
#define NO      cout << "NO" << endl
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

int ans = 0;

void func(int n, int s) {
        if (s <= n) {
                ans += 1;
                return;
        } else {
                ans += 1;
                func(n, s - n);
        }
}

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        //cin >> t;

        while(t--) {
                int n, s;
                cin >> n >> s;
                func(n, s);
                cout << ans << endl;                
        }
        return 0;
}