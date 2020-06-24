#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
        vector<int> v(4);
        for (auto &x : v) cin >> x;
        int maxx = *max_element(v.begin(), v.end());
        
        for (int i = 0; i < 4; i++) {
                if (maxx == v[i]) continue;
                else cout << maxx - v[i] << " ";
        }
        
        return 0;
}