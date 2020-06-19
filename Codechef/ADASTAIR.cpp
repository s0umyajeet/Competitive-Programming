#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
        int t;
        cin >> t;
        while (t--) {
                int n, k;
                cin >> n >> k;
                
                vector<int> v(n);
                int stairs = 0;
                for (auto &x : v) cin >> x;

                if (v[0] - 0 > k) stairs++;
                for (int i = 1; i < n; i++) {
                        if (v[i] - v[i - 1] > k) stairs++;
                }
                cout << stairs << endl;       
        }
        return 0;
}