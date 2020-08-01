#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        v[0] = 5;
        for (int i = 1; i < n; i++) {
               v[i] = (i + 1) * 5 + v[i - 1];
        }

        auto it = upper_bound(v.begin(), v.end(), 240 - k);
        cout << it - v.begin() << endl;
        return 0;
}