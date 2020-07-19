#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                
                vector<int> v(2 * n);
                for (auto &x : v) {
                        cin >> x;
                }
                
                set<int> s;
                for (int i = 0; i < v.size(); i++) {
                        if (s.find(v[i]) == s.end()) {
                                cout << v[i] << " ";
                                s.insert(v[i]);
                        }
                }
                cout << endl;
        }
        return 0;
}