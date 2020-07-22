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
        
        int t;
        cin >> t;

        while(t--) {                
                int n;
                cin >> n;                                                                                                         
                vector<int> v(n);
                
                int ones = 0;
                for (auto &x : v) {
                        cin >> x; 
                        if (x == 1) {
                                ones++;
                        }
                }
                if (ones == 0) cout << "First" << endl;
                else {
                        string winner = "First";
                        for (int i = 0; i < n; i++) {
                                if (v[i] == 1) {
                                        if (winner == "First") winner = "Second";
                                        else if (winner == "Second") winner = "First";
                                }
                        }
                        if (winner == "First") cout << "Second" << endl;
                        else cout << "First" << endl;        
                }
        }
        return 0;
}
