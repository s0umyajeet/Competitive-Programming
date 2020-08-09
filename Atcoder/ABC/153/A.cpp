#include <bits/stdc++.h>
using namespace std;

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int h, a, cnt = 0;
        cin >> h >> a;

        while (h > 0) {
                h -= a;
                cnt++;
        }
        cout << cnt << endl;
        return 0;
}