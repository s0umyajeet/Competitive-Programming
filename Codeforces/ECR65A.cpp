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

                if (s.size() < 11) cout << "NO" << endl;
                else {
                        int flag = 0;
                        for (int i = 0; i < n; i++) {
                                if (s[i] == '8') {
                                        if (n - i - 1 >= 10) {
                                                cout << "YES" << endl;
                                                flag = 1;
                                                break;
                                        }
                                }
                        }
                        if (!flag) cout << "NO" << endl;
                }
        }
        return 0;
}

//12365480000000000
//0123456