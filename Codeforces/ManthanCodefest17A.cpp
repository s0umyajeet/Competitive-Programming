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
        set<string> s1;
        while(t--) {
                string s;
                cin >> s;

                if (s1.find(s) == s1.end()) {
                        NO;
                        s1.insert(s);
                } else YES;
        }
        return 0;
}