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
        cout << count(v.begin(), v.end(), 1) << endl;
        return 0;
}