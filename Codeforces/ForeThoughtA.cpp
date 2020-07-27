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
                string s;
                cin >> s;
                int ca = count(s.begin(), s.end(), 'a');
                if (ca > s.size() / 2) cout << s.size() << endl;
                else cout << (2 * ca - 1) << endl;
        }
        return 0;
}