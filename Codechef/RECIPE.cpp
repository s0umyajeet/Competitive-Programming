#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;

        while (t--) {
                int n;
                cin >> n;
                
                vector<int> v(n);
                for (int i = 0; i < n; i++) {
                        cin >> v[i];
                }

                int gcd = v[0];
                for (auto x : v) gcd = __gcd(x, gcd);
                for (auto x : v) cout << x / gcd << " ";
                cout << endl;
        }
        return 0;
}