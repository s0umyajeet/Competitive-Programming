#include <bits/stdc++.h>
using namespace std;

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        long long n, k, cnt = 0;
        cin >> n >> k;

        vector<int> h(n);
        for (auto &x : h) cin >> x;
        sort(h.begin(), h.end(), greater<long>());
        if (k >= n) {
                cout << 0 << endl;
        } else {
                for (int i = k; i < n; i++) cnt += h[i];
                cout << cnt << endl;
        }
        return 0;
}