#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long

int32_t main() {
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                vector<int> v(n);
                int minn = 9999999;
                for (auto &x : v) {
                        cin >> x;
                        minn = min(minn, x);
                }
                cout << minn * (n - 1) << endl;
        }
        return 0;
}