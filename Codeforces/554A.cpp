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
                int n, m;
                cin >> n >> m;

                int odd1 = 0;
                int even1 = 0;
                int odd2 = 0;
                int even2 = 0;

                vector<int> v(n);
                vector<int> p(m);

                for (auto &x : v) {
                        cin >> x;
                        if (x & 1) odd1++;
                        else even1++;
                }
                for (auto &x : p) {
                        cin >> x;
                        if (x & 1) odd2++;
                        else even2++;
                }
                cout << odd1 << " " << even1 << endl;
                cout << odd2 << " " << even2 << endl;
                
                int min1 = min(even1, odd2);
                int min2 = min(even2, odd1);
                cout << max(min1, min2) << endl;
        }
        return 0;
}