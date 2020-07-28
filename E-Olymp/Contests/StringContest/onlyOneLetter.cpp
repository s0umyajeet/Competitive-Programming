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
                getline(cin >> ws, s);
                bool found = false;
                for (int i = 0; i < s.size(); i++) {
                        if (s[i] == 'a') {
                                found = true;
                                cout << 'a';
                        }
                }
                if (!found) cout << -1 << endl;
        }
        return 0;
}