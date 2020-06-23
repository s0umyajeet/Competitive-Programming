#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                vector<int> v(n);
                for (auto &x : v) cin >> x;
                sort(v.begin(), v.end());
                cout << v[0] + v[1] << endl;
        }
        return 0;
}