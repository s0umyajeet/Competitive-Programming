#include <bits/stdc++.h>
#define int     long long
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

string s;

bool checkOK () {
        if (s.find("xxx") == string::npos)
                return true;
        else return false;
}

int32_t main() {
        int t = 1;
        //cin >> t;

        while(t--) {
                int n;
                cin >> n;
                cin >> s;
                
                int count = 0;
                while(checkOK() == false) {
                        for (int i = 0; i < s.size(); i++) {
                                if (s[i] == 'x') {
                                        if (i + 1 < s.size() && i + 2 < s.size()) {
                                                if (s[i + 1] == 'x' && s[i + 2] == 'x') {
                                                        s.erase(i + 2, 1);
                                                        count++;
                                                }
                                        }
                                }
                        }
                }
                cout << count << endl;
        }
        return 0;
}
