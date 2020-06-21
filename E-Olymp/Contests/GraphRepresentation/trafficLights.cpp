#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, m;
        cin >> n >> m;

        vector<int> v(n);
        for (int i = 0; i < m; i++) {
                int a, b;
                cin >> a >> b;
                v[a - 1]++, v[b - 1]++;
        }
        for (auto x: v) cout << x << endl;
}