#include <bits/stdc++.h>
using namespace std;

#define int long long

int ppsum(int d, int n) {
        if (d == 1) {
                return (n * (n + 1)) / 2;
        } else return ppsum(d - 1, (n * (n + 1)) / 2);
}

int32_t main() {
        int t;
        cin >> t;
        while (t--) {
                int d, n;
                cin >> d >> n;
                cout << ppsum(d, n) << endl;
        }
        return 0;
}