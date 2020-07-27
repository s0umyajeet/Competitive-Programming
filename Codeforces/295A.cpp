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
                vector<int> m(26);
                int n;
                cin >> n;
                string s;
                cin >> s;

                transform(s.begin(), s.end(), s.begin(), ::tolower);
                
                for (auto x : s) {
                        m[x - 'a']++;
                }
                
                int l = 0;
                for (int i = 0; i < 26; i++) {
                        if (m[i] == 0) {
                                l = 1;
                                break;
                        }
                }
                if (l == 1) NO;
                else YES;
        }
        return 0;
}