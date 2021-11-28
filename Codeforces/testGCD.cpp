#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
#define int long long

int32_t main() {
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                int v[n];
                for (int i = 0; i < n; i++) {
                        cin >> v[i];
                }
                bool fail = false;
                for (int i = 1; i < n + 1; i++) {
                        if (__gcd(i, v[i - 1]) != v[i - 1]) {
                                fail = true;
                                break;
                        }
                }
                cout << (fail ? "NO" : "YES") << endl;
        }
}