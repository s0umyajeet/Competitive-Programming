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
        // cin >> t;

        while(t--) {
                int n;
                cin >> n;
                string s;
                cin >> s;
                int count = 0;
                for (int i = s.size() - 1; i >= 0; i--) {
                        if ((s[i] + 48) % 2 == 0) {
                                count += i + 1;
                        }
                }
                cout << count << endl;
        }
        return 0;
}