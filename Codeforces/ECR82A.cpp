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
                string s;
                cin >> s;
                int startpos = 0;
                int endpos = 0;
                auto itr = find(s.begin(), s.end(), '1');
                startpos = itr - s.begin();
                auto itr2 = find(s.rbegin(), s.rend(), '1');
                endpos = s.rend() - itr2 - 1;
                int count = 0;
                for (int i = startpos; i < endpos; i++) {
                        if (s[i] == '0') count++;
                }
                cout << count << endl;
        }
        return 0;
}