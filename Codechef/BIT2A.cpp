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

                vector<int> count(n);
                for (auto itr = v.begin(); itr != v.end(); itr++) {
                        auto it = upper_bound(itr + 1, v.end(), *itr);
                        count[itr - v.begin()] = v.end() - it;
                }
                for (auto x : count) cout << x << " ";
                cout << endl;
        }
        return 0;
}