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
                int n, m, r;
                cin >> n >> m >> r;
                
                int initial = r;

                vector<int> buy(n);
                vector<int> sell(m);

                for (auto &x : buy) cin >> x;
                for (auto &x : sell) cin >> x;

                sort(buy.begin(), buy.end());
                sort(sell.begin(), sell.end(), greater<int>());

                int quantity = r / buy[0];
                r = r - (quantity * buy[0]);

                r += quantity * sell[0];

                cout << max(initial, r) << endl;
        }
        return 0;
}