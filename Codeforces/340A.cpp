#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
        int c;
        cin >> c;
        if (c <= 5) cout << 1 << endl;
        else if (c % 5 == 0) cout << c / 5 << endl;
        else cout << c / 5 + 1 << endl;
        return 0; 
}