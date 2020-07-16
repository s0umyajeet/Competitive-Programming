#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main() {
        int n;
        vector<int> v(1e6);
        v[0] = 2;
        v[1] = 2;

        for (int i = 2; i < v.size(); i++) {
                v[i] = v[i - 1] % MOD + v[i - 2] % MOD;
        }
        cin >> n;
        cout << v[n - 1] << endl;
}