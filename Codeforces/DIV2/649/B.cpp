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
                int sum = 0;
                for (int i = 0; i < n - 1; i++) {
                        sum += abs(v[i] - v[i + 1]);
                }
                cout << sum << endl;
                for (auto x : v) cout << x << " ";
                cout << endl;
        }
}