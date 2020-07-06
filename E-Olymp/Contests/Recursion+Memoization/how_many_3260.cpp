#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<vector<int>> mem(13, vector<int>(13));

int nCr(int n, int k) {
        if (mem[n][k]) return mem[n][k];
        if (k == 0 || k == n) {
                mem[n][k] = 1;
                return 1;
        }
        if (k == 1) {
                mem[n][k] = n;
                return n;
        }
        else {
                mem[n][k] = nCr(n - 1, k - 1) + nCr(n - 1, k);
                return mem[n][k];
        }
}

int32_t main() {
        int n, k;
        cin >> n >> k;
        if (k < n - k) cout << nCr(n, k) << endl;
        else cout << nCr(n, n - k) << endl;
}