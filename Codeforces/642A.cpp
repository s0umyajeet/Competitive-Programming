#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
        int t;
        cin >> t;
        while (t--) {
                int n, m;
                cin >> n >> m;
                if (n == 1) {
                        cout << 0 << endl;
                } else if (n == 2) {
                        cout << m << endl;
                } else {
                        cout << 2 * m << endl;
                }
        }
        return 0;
}