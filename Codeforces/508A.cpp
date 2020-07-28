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
                int n, k;
                cin >> n >> k;
                vector<int> count(k);
                string s;
                cin >> s;
                for (int i = 0; i < n; i++) {
                        count[s[i] - 'A']++;
                }
                sort(count.begin(), count.end());
                cout << count[0] * k << endl;                
        }
        return 0;
}