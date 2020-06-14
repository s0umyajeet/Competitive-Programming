#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;

        while (t--) {
                int n;
                cin >> n;
                vector<int> v(n);
                int sum = 0;
                for (auto &x: v) {
                        cin >> x;
                        sum += x;
                }

                if (sum == 100) cout << "YES" << endl;
                else if (sum < 100) cout << "NO" << endl;
                else if (sum - 100 < n) cout << "YES" << endl;
                else cout << "NO" << endl;
        }
        return 0;
}