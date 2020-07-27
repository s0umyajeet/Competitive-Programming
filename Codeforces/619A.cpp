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
        cin >> t;

        while(t--) {
                string a, b, c;
                cin >> a >> b >> c;
                int flag = 0;
                for (int i = 0; i < a.size(); i++) {
                        if (c[i] != a[i] && c[i] != b[i]) {
                                NO;
                                flag = 1;
                                break;
                        }
                }
                if (flag == 0) YES;
        }
        return 0;
}