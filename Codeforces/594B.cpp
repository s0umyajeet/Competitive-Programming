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
                for (auto &x : v) cin >> x;
                sort(v.begin(), v.end());
                int x = 0, y = 0;
                for (int i = 0; i < n / 2; i++) y += v[i];
                for (int i = n / 2; i < n; i++) x += v[i];
                cout << fixed << setprecision(0) << pow((x - 0), 2) + pow((y - 0), 2) << endl;
        }
        return 0;
}