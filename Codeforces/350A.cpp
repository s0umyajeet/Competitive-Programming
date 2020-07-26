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
        // cin >> t;

        while(t--) {
                int n;
                cin >> n;
                int weeks = n / 7;
                int minn = 2 * weeks;
                int maxx = 2 * weeks;
                int rem = n % 7;
                if (rem == 1) maxx += 1;
                if (rem >= 2 && rem != 6) maxx += 2;
                if (rem == 6) {
                        minn++;
                        maxx += 2;
                }
                cout << minn << " " << maxx << endl;
        }
        return 0;
}