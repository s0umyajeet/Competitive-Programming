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

        int n, m;
        cin >> n >> m;
        
        vector<string> s(n);
        vector<string> t(m);

        for (auto &x : s) cin >> x;
        for (auto &x : t) cin >> x;

        int tt;
        cin >> tt;

        while(tt--) {
                int b;
                cin >> b;
                if (b < n && b < m) {
                        cout << s[b - 1] + t[b - 1] << endl;
                } else if (b < n && b > m) {
                        cout << s[b - 1] + t[(b % m) - 1] << endl;
                } else if (b > n && b < m) {
                        cout << s[(b % n) - 1] + t[m - 1] << endl;
                } else {
                        cout << s[(b % n) - 1] + t[(b % m) - 1];
                }
                // string ans = s[(b % n) - 1] + t[(b % m) - 1];
                // cout << ans << endl;
        }
        return 0;
}