#include <bits/stdc++.h>
#define int     long long
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;
string s;

void solve() {
        string s1 = "01", s2 = "10";
        if (s.find(s1) == string::npos && s.find(s2) == string::npos) 
                return;
        for (int i = 0; i < s.size(); i++) {
                if (i != s.size() - 1) {
                        if (s[i] == '0' && s[i + 1] == '1') {
                                s.erase(i, 2);
                        }
                        else if (s[i] == '1' && s[i + 1] == '0') {
                                s.erase(i, 2);
                        }
                }
        }
        solve();        
}

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        //cin >> t;

        while(t--) {
                int n;
                cin >> n;
                cin >> s;
                solve();
                cout << s.size() << endl;
                
        }
}