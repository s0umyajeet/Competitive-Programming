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
                int minn = 9999999;
                for (int i = 0; i < n - 1; i++) {
                        minn = min(minn, abs(v[i] - v[i + 1]));
                }
                cout << minn << endl;
        }
        return 0;
}