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
        cin >> t;

        while(t--) {
                int n;
                cin >> n;
                string s;
                cin >> s;
        
                int odd = 0;
                for (auto x : s) {
                        if ((x - 48) % 2 == 1) odd++;
                }
                if (odd < 2) cout << -1;
                else {
                        int count = 0;
                        for (auto x : s) {
                                if (count == 2) break;
                                if ((x - 48) % 2 == 1) {
                                        cout << x;
                                        count++;
                                }
                        }
                }
                cout << endl ;
        }
        return 0;
}