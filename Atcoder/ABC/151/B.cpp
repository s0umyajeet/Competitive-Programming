#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, m, k, x, sum = 0;
        cin >> n >> k >> m;

        for (int i = 1; i < n; i++) {
                cin >> x;
                sum += x;
        }

        int req_score = (m * n) - sum; 
        if (req_score <= k) {
                if (req_score <= 0) cout << 0 << endl;
                else cout << req_score << endl;
        }
        else cout << -1 << endl;
        return 0;
}