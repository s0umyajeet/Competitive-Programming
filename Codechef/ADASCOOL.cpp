#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
        int t;
        cin >> t;
        while (t--) {
                int n, m;
                cin >> n >> m;

                if ((n * m) % 2) cout << "NO" << endl;
                else cout << "YES" << endl; 
        }
        return 0;
}