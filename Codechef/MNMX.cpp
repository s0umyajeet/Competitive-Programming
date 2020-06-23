#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                int minn = 9999999999;
                int input;
                for (int i = 0; i < n; i++) {
                        cin >> input;
                        minn = min(minn, input);
                }
                cout << minn * (n - 1) << endl;
        }
        return 0;
}