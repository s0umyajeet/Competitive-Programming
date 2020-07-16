#include <bits/stdc++.h>
using namespace std;
#define int long long

int exp(int a, int b) {
        if (b == 0) return 1;
        if (b == 1) return a;
        else return a * exp(a, b - 1);
}

int32_t main() {
        int a, b;
        cin >> a >> b;
        cout << exp(a, b) << endl;
}