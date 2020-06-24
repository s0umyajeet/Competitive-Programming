#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                if (n < 3) cout << 0 << endl;
                else {
                        if (n % 2 == 0)cout << n / 2 - 1 << endl;
                        else cout << n / 2 << endl;
                }
        }
        return 0;
}