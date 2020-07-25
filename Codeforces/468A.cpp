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
        // int t;
        // cin >> t;

        while(t--) {
                int a, b;
                cin >> a >> b;

                int dist = abs(a - b);
                int tired1 = 0;
                int tired2 = 0;

                if (dist % 2 == 0) {
                        dist /= 2;
                        cout << 2 * ((dist) * (dist + 1)) / 2 << endl;
                } else {
                        int n1 = dist / 2;
                        int n2 = dist / 2 + 1;
                        cout << (((n1) * (n1 + 1)) / 2) + (((n2) * (n2 + 1)) / 2);
                }
        }
}