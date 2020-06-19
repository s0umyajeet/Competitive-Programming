#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
        int t;
        cin >> t;

        while (t--) {
                int n, p;
                cin >> n >> p;

                int easy = 0, hard = 0;
                int solved = 0;
                for (int i = 0; i < n; i++) {
                        cin >> solved;
                        if (solved >= (p / 2)) easy++;
                        else if (solved <= (p / 10)) hard++;
                }

                if (easy == 1 && hard == 2) cout << "yes" << endl;
                else cout << "no" << endl;
        }
        return 0;
}