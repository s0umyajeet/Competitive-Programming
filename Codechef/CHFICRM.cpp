#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                vector<int> v(n);
                for (auto &x : v) cin >> x;

                if (v[0] != 5) cout << "NO" << endl;
                else {
                        bool failed = false;
                        map<int, int> coins;
                        coins[5] = 1;
                        coins[10] = 0;
                        coins[15] = 0;

                        for (int i = 1; i < n; i++) {
                                if (v[i] == 5) coins[5]++;
                                if (v[i] == 10) {
                                        if (coins[5] > 0) {
                                                coins[5]--;
                                                coins[10]++;
                                        } else {
                                                failed = true;
                                                cout << "NO" << endl;
                                                break;
                                        }
                                }
                                if (v[i] == 15) {
                                        if (coins[10] > 0) {
                                                coins[10]--;
                                                coins[15]++;
                                        } else if (coins[5] >= 2) {
                                                coins[5] -= 2;
                                                coins[15]++;
                                        } else {
                                                failed = true;
                                                cout << "NO" << endl;
                                                break;
                                        }
                                }
                        }
                        if (!failed) {
                                cout << "YES" << endl;
                        }
                }
        }
        return 0;
}