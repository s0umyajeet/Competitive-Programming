#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
        int n;
        cin >> n;
        
        int prod = 1;
        for (int i = 1; i <= n; i++) {
                prod += i * 6;
        }
        cout << prod << endl;
        return 0;
}