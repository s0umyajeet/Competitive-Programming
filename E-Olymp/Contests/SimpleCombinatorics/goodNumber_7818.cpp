#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
        int n;
        cin >> n;

        int prod = 1;
        for (int i = 1; i <= n; i++) {
                prod *= 5;
        }
        cout << prod << endl;
        return 0;
}
