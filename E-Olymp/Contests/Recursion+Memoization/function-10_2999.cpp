#include <bits/stdc++.h>
using namespace std;

#define int long long

int func_10(int m, int n) {
        if (m == 0) return 1;
        if (m == n) return 1;
        else return func_10(m - 1, n - 1) + func_10(m, n - 1);
}

int32_t main() {
        int m, n;
        cin >> n >> m;
        cout << func_10(m, n) << endl;
}