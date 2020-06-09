#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;

        while (t--) {
                int n, k, s;
                cin >> n >> k >> s;
                int days = 0;

                int chocolates = n;
                days++;
                int flag = 0;
                for (int i = 1; i <= s; i++) {
                        if (chocolates - k <= 0) {
                                if (i % 7 == 0) {
                                        cout << -1 << endl;
                                        flag = 1;
                                        break;
                                }
                                chocolates += n;
                                days++;
                        }
                        chocolates -= k;
                }
                if (!flag) cout << days << endl;
        }
}