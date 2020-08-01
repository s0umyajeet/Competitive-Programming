#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
        int n;
        cin >> n;
        if (n & 1) cout << -(n + 1) / 2 << endl;
        else cout << n / 2 << endl;
        return 0;
}