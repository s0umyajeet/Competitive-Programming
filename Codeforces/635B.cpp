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
                int x, n, m;
                cin >> x >> n >> m;
                
                if (x <= 20) {
                        if (x - (m * 10) <= 0) {
                                cout << "YES" << endl;
                        } else {
                                cout << "NO" << endl;
                        }
                } else {
                        while (n > 0) {
                                x = floor(x / 2) + 10;
                                n--;
                        }
                        x -= m * 10;
                        if (x <= 0) cout << "YES" << endl;
                        else cout << "NO" << endl;
                }
                
        }
        return 0;
}