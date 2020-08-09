#include <bits/stdc++.h>
using namespace std;

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int h, n;
        cin >> h >> n;

        vector<int> v(n);
        for (auto &x : v) cin >> x;
        sort(v.begin(), v.end(), greater<int>());
        for (int i = 0; i < v.size(); i++) {
                h -= v[i];
                if (h <= 0) {
                        cout << "Yes" << endl;
                        return 0;
                } 
        }
        cout << "No" << endl;
        return 0;
}