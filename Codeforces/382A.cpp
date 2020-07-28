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
                string s;
                cin >> s;
                auto itrG = find(s.begin(), s.end(), 'G');
                auto itrT = find(s.begin(), s.end(), 'T');

                int posG = itrG - s.begin();
                int posT = itrT - s.begin();

                int found = 0;

                if (posT > posG) {
                        for (int i = posG; i < s.size(); i += k) {
                                if (s[i] == '#') break;
                                if (i == posT) {
                                        YES;
                                        found = 1;
                                        break;
                                }
                        }
                } else {
                        for (int i = posG; i >= 0; i -= k) {
                                if (s[i] == '#') break;
                                if (i == posT) {
                                        YES;
                                        found = 1;
                                        break;
                                }
                        }
                }
                if (!found) NO;
        }
        return 0;
}