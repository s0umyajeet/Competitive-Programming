#include <bits/stdc++.h>
#define int     long long
#define YES     cout << "YES" << endl
#define NO      cout << "NO" << endl
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

bool checkOK(string s) {
        for (int i = 2; i <= s.size(); i += 2) {
                string sample = s.substr(0, i);
                int countA = 0;
                int countB = 0;
                for (int j = 0; j < sample.size(); j++) {
                        if (sample[j] == 'a') countA++;
                        else countB++;
                }
                if (countA != countB) return false;
        }        
        return true;
}

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        // cin >> t;

        while(t--) {
                int n;
                cin >> n;
                string s;
                cin >> s;

                if (checkOK(s)) {
                        cout << 0 << endl;
                        cout << s << endl;
                } else {
                        char f;
                        if (s[0] == 'a') f = 'a';
                        else f = 'b';   
                        int count = 0;
                        for (int i = 0; i < s.size(); i++) {
                                if (f == 'b') {
                                        if (i & 1) {
                                                if (s[i] != 'a') count++;
                                        } 
                                        if (i % 2 == 0) {
                                                if (s[i] != 'b') count++;
                                        }
                                }
                                if (f == 'a') {
                                        if (i & 1) {
                                                if (s[i] != 'b') count++;
                                        }
                                        if (i % 2 == 0) {
                                                if (s[i] != 'a') count++;
                                        }
                                }
                        }
                        if (count & 1)
                                cout << count / 2 + 1 << endl;
                        else cout << count << endl;
                        if (f == 'a') {
                                for (int i = 0; i < s.size(); i++) {
                                        if (i & 1) cout << 'b';
                                        else cout << 'a';
                                }
                        } else { 
                                for (int i = 0; i < s.size(); i++) {
                                        if (i & 1) cout << 'a';
                                        else cout << 'b';
                                }
                        }
                }
        }
        return 0;
}