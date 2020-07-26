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
                int n;
                cin >> n;
                string s;
                cin >> s;
        
                int even = 0;
                int odd = 0;
                for (auto x : s) {
                        if ((x - 48) % 2 == 0) even++;
                        else odd++;
                }

                if (odd % 2 == 0 && (s[s.size() - 1] - 48) % 2 == 1) {
                        coutans << s << endl;
                } else {
                        if (odd % 2 == 1 && (s[s.size() - 1] - 48) % 2 == 1) {
                                for (int i = 0; i < s.size() - 1; i++) {
                                        if ((s[i] - 48) % 2 == 0)
                                                cout << s[i];
                                }
                        } else if (odd % 2 == 0 && (s[s.size() - 1] - 48) % 2 == 0) {
                                int oddcount = 0;
                                for (int i = 0; i < n; i++) {
                                        if ((s[i] - 48) % 2 == 1) {
                                                oddcount++;
                                        }
                                        cout << s[i] << endl;
                                        if (oddcount % 2 == 0 && oddcount != 0 && (s[i] - 48) % 2 == 1) {
                                                break;
                                        }
                                        
                                }
                        } else if (odd % 2 == 1 && (s[s.size() - 1] - 48) % 2 == 0) {
                                                               
                
        }
        return 0;
}