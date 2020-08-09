//https://atcoder.jp/contests/abc042/tasks/abc042_b
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);

        int n, l;
        cin >> n >> l;
        vector<string> v(n);
        for (auto &x : v) cin >> x;
        sort(v.begin(), v.end());
        for (auto x : v) cout << x;
        return 0;
}