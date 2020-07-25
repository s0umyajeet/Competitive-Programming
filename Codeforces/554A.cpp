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

                vector<int> v(n);
                vector<int> k(m);
                int even = 0;
                int odd = 0;
                for (auto &x : v) cin >> x;
                for (auto &x : k) {
                        cin >> x;
                        if (x & 1) odd++;
                        else even++;
                }

                int count = 0;
                for (int i = 0; i < n; i++) {
                        if (v[i] % 2) {
                                if (even > 0) {
                                        count++;
                                        even--;
                                }
                        } else {
                                if (odd > 0) {
                                        count++;
                                        odd--;
                                }
                        }
                }
                cout << count << endl;
        }
        return 0;
}