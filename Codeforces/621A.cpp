#include <bits/stdc++.h>
#define int     long long
#define YES     cout << "YES" << endl
#define NO      cout << "NO" << endl
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;


/*
1
100 16
8 2 1 3 3 3 8 10 4 5 4 8 7 7 3 3 10 10 5 1 9 10 4 3 4 2 8 6 4 3 
1 4 5 2 10 2 1 2 3 10 2 10 3 3 7 2 6 2 6 1 2 8 6 6 6 3 9 3 3 8 
7 4 8 8 3 4 8 3 4 5 8 1 6 5 7 7 5 7 7 3 8 2 2 4 7 4 6 4 9 4 4 10 6 7 2 4 3 3 10 1
*/
int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t;
        cin >> t;

        while(t--) {
                int n, d;
                cin >> n >> d;

                vector<int> v(n);
                for (auto &x : v) cin >> x;

                for (int i = 1; i < n; i++) {
                        if (d == 0) break;
                        if (v[i] > 0) {
                                if (v[i] * i < d) {
                                        v[0] += v[i];
                                        v[i] = 0;
                                        d -= i * v[i];
                                } else {
                                        v[0] += d / i;
                                        d = 0;
                                }
                        }
                }
                cout << v[0] << endl;      
        }
        return 0;
}