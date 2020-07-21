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
                int n;
                cin >> n;
                string s;
                cin >> s;

                int ans = 0;
                int countP = 0;
                countP = count(s.begin(), s.end(), 'P');
                int countA = s.size() - countP;

                if (countA == 1 && s[s.size() - 1] == 'A') cout << 0 << endl;
                else {
                        while (countP != 0) {
                                for (int i = 0; i < n; i++) {
                                        if (i != 0 && s[i] == 'P' && s[i - 1] == 'A') {
                                                s[i] = 'A';
                                        }
                                }                
                                ans++;
                                countP = count(s.begin(), s.end(), 'P');
                        }
                        cout << ans << endl;
                }
        }
        return 0;
}