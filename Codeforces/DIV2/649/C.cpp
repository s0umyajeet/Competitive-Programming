#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n + 1, {0, 0});
        for (int i = 1; i <= n; i++) v[i].first = i;
        vector<int> t(n);
        for (auto &x : t) cin >> x;
}