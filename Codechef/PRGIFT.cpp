#include <bits/stdc++.h>
using namespace std;
int main() {
        int t;
        cin >> t;
        while (t--) {
                int n, k;
                cin >> n >> k;
                vector<int> v(n);
                int even = 0;
                for (auto &x : v) {
                        cin >> x;
                        if (x % 2 == 0) even++;
                }
                
                if(k > even || (k == 0 && even == n)) cout << "NO" << endl;
                else cout << "YES" << endl;
        }
        return 0;
}