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
                int n, m;
                cin >> n >> m;

                vector<int> v(n);
                vector<int> p(m);

                set<int> s;
                for (auto &x : v) {
                        cin >> x;
                        s.insert(x);
                }
                bool found = false;
                int common = 0;
                for (auto &x : p) {
                        cin >> x;
                        if (s.find(x) != s.end()) {
                                found = true;
                                common = x;
                        }
                }
                if (!found) NO;
                else {
                        YES;
                        cout << 1 << " " << common << endl;
                }
        }
        return 0;
}