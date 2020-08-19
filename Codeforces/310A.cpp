#include <bits/stdc++.h>
#define int     long long
#define endl    "\n"
using namespace std;
string s;

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        //cin >> t;

        while(t--) {
                int n;
                cin >> n;
                cin >> s;
                cout << s.size() - 2 * min(count(s.begin(), s.end(), '0'), count(s.begin(), s.end(), '1'));
                cout << endl;
        }
}