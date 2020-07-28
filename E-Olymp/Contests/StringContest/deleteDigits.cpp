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
        //cin >> t;

        while(t--) {
                string s;
                cin >> s;
                string ans;
                for (int i = 0; i < s.size(); i++) {
                        if (s[i] != '3' && s[i] != '9') {
                                ans += s[i];
                        }
                }
                cout << ans << endl;
        }
        return 0;
}