#include <bits/stdc++.h>
#define int long long
#define N 1000000007
using namespace std;

int fac(int n) {
        int fac = 1;
        for (int i = 2; i <= n; i++) {
                fac = ((fac % N) * (i % N)) % N;
        }
        return fac;
}

int32_t main() {
        int n, m;
        cin >> n >> m;
        int total = m + n;
        if (total / 2 - n > 2 || total / 2 - m > 2) cout << 0 << endl;
        else {
                if (n == total / 2 && m == total / 2)
                        cout << 2 * (((fac(n) % N) * (fac(m) % N)) % N) << endl;
                else cout << ((fac(n) % N) * (fac(m) % N)) % N << endl;
        }
        return 0;
}      