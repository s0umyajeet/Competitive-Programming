#include <bits/stdc++.h>
#define int long long
#define MOD 1000000007
using namespace std;

int n, k;

int calc(int t) {
        int ans = 1;
        for (int i = 0; i < t; i++) {
                ans = ((ans % MOD) * (k % MOD)) % MODS;
        }
        return ans;
}

int32_t main() {
        
        cin >> n >> k;
        if (n & 1) {
                cout << (((n - 1) % MOD) * (calc(n / 2 + 1) % MOD)) % MOD << endl;
        } else {
                cout << (((n - 1) % MOD) * (calc(n / 2) % MOD)) % MOD << endl;
        }
        return 0;
}
        