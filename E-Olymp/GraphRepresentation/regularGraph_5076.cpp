#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);

        while (m--) {
                int a, b;
                cin >> a >> b;

                v[a - 1]++; v[b - 1]++;
        }
        set<int> s(v.begin(), v.end());
        if (s.size() == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
} 