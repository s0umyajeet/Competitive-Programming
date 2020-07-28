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
                int n, d;
                cin >> n >> d;
                string s;
                cin >> s;
                int count = 0;
                for (int i = 0; i < n; ) {
                        cout << i << endl;
                        for (int j = i + d; j >= i; j--) {
                                // cout << "exe";
                                if (j < n && s[j] == '1') {
                                        i = j;
                                        count++;
                                        break;
                                }
                        }
                }
                cout << count << endl;
        }               
        return 0;
}