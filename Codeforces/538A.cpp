#include <bits/stdc++.h>
#define int     long long
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        //cin >> t;

        while(t--) {
                int x, y, z;
                cin >> x >> y >> z;
                int a, b, c;
                cin >> a >> b >> c;
                
                int flag1 = 0;
                int flag2 = 0;
                int flag3 = 0;

                int rem_a = a;
                if (a >= x) {
                        flag1 = 1;
                        rem_a -= x; 
                }

                int rem_ab = rem_a + b;
                if (rem_ab >= y) {
                        flag2 = 1;
                        rem_ab -= y;
                }

                if (rem_ab + c >= z) {
                        flag3 = 1;
                }

                if (flag1 && flag2 && flag3) cout << "YES" << endl;
                else cout << "NO" << endl;
        }
        return 0;
}