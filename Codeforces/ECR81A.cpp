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
                int n;
                cin >> n;
                map<int, int> m;
                m[2] = 1;
                m[3] = 7;
                m[4] = 11;
                m[5] = 71;
                if (n < 6) {
                        cout << m[n] << endl;
                } else {
                        int x = n / 6;
                        int y = n % 6;

                        string ans;
                        for (int i = 0; i < x; i++) {
                                ans += "111";
                        }
                        if (y > 1)
                                ans += to_string(m[y]);
                        sort(ans.begin(), ans.end(), greater<char>());
                        cout << ans << endl;
                }
        }
        return 0;
}