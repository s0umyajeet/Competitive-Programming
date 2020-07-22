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
                map<int, int> m;                
                int even = -1;
                int odd_count = 0;

                for (int i = 0; i < n; i++) {
                        cin >> v[i];
                        m[v[i]] = i;
                        if (v[i] % 2 == 0) even = v[i];
                        else odd_count++;
                }

                if (even == -1) {
                        if (odd_count >= 2) {
                                cout << 2 << endl;      
                                for (int i = 0; i < n - 1; i++) {
                                        if (v[i] % 2 == 1 && v[i + 1] % 2 == 1) {
                                                cout << i + 1 << " " << i + 2 << endl;
                                                break;
                                        } 
                                }
                        } else {
                                cout << -1 << endl;
                        }
                } else {
                        cout << 1 << endl;
                        cout << m[even] + 1 << endl;
                }
        }
        return 0;
}