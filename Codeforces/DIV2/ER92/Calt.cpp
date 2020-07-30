#include <bits/stdc++.h>
#define int     long long
#define YES     cout << "YES" << endl
#define NO      cout << "NO" << endl
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

int process(string &s) {
        vector<vector<char>> v(100);
        int t = -1;
        for (int i = 0; i <= 9; i++) {
                for (int j = 0; j <= 9; j++) {
                        t++;
                        // cout << t << endl;
                        for (int l = 0; l < s.size(); l++) {
                                if (s[l] == i + 48) v[t].push_back(s[l]);
                                if (s[l] == j + 48) v[t].push_back(s[l]);
                        }
                }
        }

        for (auto x : v) {
                cout << "r: ";
                for (auto y : x) {
                        cout <<  y << " ";
                }
                cout << endl;
        }
        int maxx = -999;
        for (int i = 0; i < 100; i++) {
                maxx = max((int)v[i].size(), maxx);
        }
        return maxx;
}


int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t;
        cin >> t;

        while(t--) {
                string s;
                cin >> s;
                cout << s.size() - process(s) << endl;
        }
}