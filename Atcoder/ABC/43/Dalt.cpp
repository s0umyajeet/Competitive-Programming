//https://atcoder.jp/contests/abc043/tasks/arc059_b
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);

        string s;
        cin >> s;
        
        for (int i = 0; i < (int)s.size() - 1; i++) {
                if (s[i] == s[i + 1]) {
                        cout << i + 1 << " " << i + 2 << endl;
                        return 0;
                }
        }
        
        for (int i = 0; i < (int) s.size() - 2; i++) {
                if (s[i] == s[i + 2]) {
                        cout << i + 1 << " " << i + 3 << endl;
                        return 0;
                }
        }
        cout << "-1 -1" << endl;
        return 0;
}