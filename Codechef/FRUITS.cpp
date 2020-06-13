#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                int a, b, k;
                cin >> a >> b >> k;
                if (k - abs(a - b) > 0) cout << 0 << endl;
                else cout << abs(a - b) - k << endl;
        }
        return 0;
}