//Problem: https://atcoder.jp/contests/abc043/tasks/arc059_a
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);

        long long n, mid, min = 101, max = -101, cost = 0;
        cin >> n;

        vector<int> v(n);
        for (auto &x : v) { 
                cin >> x;
                if (x <= min) min = x;
                if (x >= max) max = x;
        }

        if (min == max) cout << 0;
        else {
                mid = ((min + max) % 2 == 0) ? (min + max) / 2 : (min + max) / 2 + 1;
                for (int i = 0; i < n; i++) {
                        cost += (v[i] - mid) * (v[i] - mid);
                }
                cout << cost << endl;
        }
        return 0;
}