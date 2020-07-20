#include <bits/stdc++.h>
#define int     long long
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t;
        cin >> t;

        while(t--) {
                int n, x, a, b;
                cin >> n >> x >> a >> b; 

                int left_dist = 0;
                int right_dist = 0;

                if (a < b) {
                        left_dist = a - 1;
                        right_dist = n - b;

                        if (left_dist + right_dist <= x) cout << n - 1 << endl;
                        else cout << b - a + x << endl;
                } else {
                        left_dist = b - 1;
                        right_dist = n - a;

                        if (left_dist + right_dist <= x) cout << n - 1 << endl;
                        else cout << a - b + x << endl;
                }
        }
}