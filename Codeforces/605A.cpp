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
        
        // int t = 1;
        int t;
        cin >> t;

        while(t--) {
                vector<int> v(3);
                for (auto &x : v) cin >> x;
                sort(v.begin(), v.end());
                if (v[0] == v[1] && v[1] == v[2]) coutans << 0 << endl;
                else {
                        if (v[0] == v[1]) {
                                v[2]--;
                                int case1 = 2 * (v[2] - v[1]);
                                v[2]++;
                                v[0]++;
                                v[1]++;  
                                coutans << 2 * (v[2] - v[1]) << endl;
                        } else if (v[1] == v[2]) {
                                v[0]++;
                                coutans << 2 * (v[1] - v[0]) << endl;
                        } else {
                                v[0]++;
                                v[2]--;
                                int dist = 2 * v[2] - 2 * v[0];
                                coutans << dist << endl;
                        }
                }
        }
        return 0;
}