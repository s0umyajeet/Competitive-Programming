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
                vector<int> v(n);
                vector<pair<int, int>> loc(n);
                for (auto &x : v) cin >> x;
                for (int i = 0; i < n; i++) {
                        loc[i] = {v[i], i + 1};
                }
                sort(loc.begin(), loc.end());
                int shots = 0;
                int ans = 0;
                for (int i = n - 1; i >= 0; i--) {
                        ans += loc[i].first * shots + 1;
                        shots++;
                }
                cout << ans << endl;               
                for (int i = n - 1; i >= 0; i--) {
                        cout << loc[i].second << " ";
                } 
        }
        return 0;
}