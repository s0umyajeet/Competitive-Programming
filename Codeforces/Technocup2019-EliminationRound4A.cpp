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
                string s;
                cin >> s;

                int i = 0;
                int j = s.size() - 1;
                string ans;
                int k = 0;
                if (s.size() % 2 == 0) {
                        while (ans.size() != s.size()) {
                                if (k % 2 == 0) {
                                        string temp = s.substr(j, 1);
                                        temp.append(ans);
                                        ans = temp;
                                        j--;
                                } else {
                                        string temp = s.substr(i, 1);
                                        temp.append(ans);
                                        ans = temp;
                                        i++;
                                }
                                k++;
                        }
                } else {
                        while (ans.size() != s.size()) {
                                if (k % 2 == 0) {
                                        string temp = s.substr(i, 1);
                                        temp.append(ans);
                                        ans = temp;
                                        i++;
                                } else {
                                        string temp = s.substr(j, 1);
                                        temp.append(ans);
                                        ans = temp;
                                        j--;
                                }
                                k++;
                        }
                }
                cout << ans << endl;
        }
        return 0;
}