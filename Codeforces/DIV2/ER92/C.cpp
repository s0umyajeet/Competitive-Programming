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
        
        int t;
        cin >> t;

        while(t--) {
                string s;
                cin >> s;
                vector<int> count(10);
                for (auto x : s) count[x - 48]++;
                int various = 0;
                int maxx = -999;
                // for (auto x : count) cout << x << endl;
                for (int i = 0; i < count.size(); i++) {
                        if (count[i] >= 1) various++;
                        maxx = max(count[i], maxx);
                }
                // cout << "mx " << maxx << endl;
                // cout << various << endl;
                if (various == 1) coutans << 0 << endl;
                else  {
                        if (various == 2) {
                                bool fail = false;
                                for (int i = 0; i < s.size() - 1; i++) {
                                        if (s[i] == s[i + 1]) {
                                                fail = true;
                                                break;
                                        }
                                }
                                if (s[0] == s[s.size() - 1]) fail = true;
                                if (!fail) {
                                        coutans << 0 << endl;
                                } else {
                                        if (maxx == 1) coutans << s.size() - 2 << endl;
                                        else {
                                                coutans << s.size() - maxx << endl;
                                        }
                                }
                        } else {
                                if (maxx == 1) coutans << s.size() - 2 << endl;
                                else {
                                        coutans << s.size() - maxx << endl;
                                }
                        }
                }
        }
        return 0;
}