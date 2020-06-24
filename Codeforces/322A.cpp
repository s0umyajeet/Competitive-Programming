#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
        int a, b;
        cin >> a >> b;
        if (a < b) cout << a << " " << (b - a) / 2 << endl;
        else cout << b << " " << (a - b) / 2 << endl;
        return 0;
}