#include <bits/stdc++.h>
#define int     long long
#define float   double
#define YES     cout << "YES" << endl
#define NO      cout << "NO" << endl
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t, m;
        cin >> t >> m;
        float minn = 99999;
        while(t--) {
                float a, b;
                cin >> a >> b;
                minn = min(minn, a / b);
        }
        cout << fixed << setprecision(10) << m * minn << endl;
        return 0;
}