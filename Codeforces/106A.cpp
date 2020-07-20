#include <bits/stdc++.h>
#define int     long long
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        //cin >> t;

        while(t--) {
                int k;
                cin >> k;
                if (k == 0) {
                        cout << 0 << endl;
                        return 0;
                }
                vector<int> v(12);
                for (auto &x : v) cin >> x;
                sort(v.begin(), v.end(), greater<int>());

                int sum = 0;
                for (int i = 0; i < 12; i++) {
                        sum += v[i];
                        if (sum >= k) {
                                cout << i + 1 << endl;
                                return 0;
                        }  
                }
                cout << -1 << endl;
        }
        return 0;
}