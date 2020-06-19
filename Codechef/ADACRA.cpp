#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
        int t;
        cin >> t;
        while (t--) {
                string s;
                cin >> s;
                auto it = unique(s.begin(), s.end());
                s.resize(it - s.begin());
                int d = 0, u = 0;
                for (auto x : s) if (x == 'D') d++; else u++;
                cout << min(d, u) << endl;
        }
        return 0;
}