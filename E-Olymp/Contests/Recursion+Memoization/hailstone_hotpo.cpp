#include <bits/stdc++.h>
using namespace std;
#define BIG 100001

vector<int> v(BIG);
int calculate(int n, int &maxx);

void solve() {
        for (int i = 1; i < BIG - 1; i++) {
                v[i] = calculate(i, i);
        }
}

int calculate(int n, int &maxx) {
        if (n == 1) return maxx;
        else if (n % 2 == 0) {
                if (v[n / 2]) return v[n / 2];
                else {
                        v[n / 2] = calculate(n / 2, (int&)max(maxx, n / 2));
                        return v[n / 2];
                }
        } else {
                if (v[n * 3 + 1]) return v[n * 3 + 1];
                else {
                        v[n * 3 + 1] = calculate(n * 3 + 1, (int&)max(maxx, n * 3 + 1));
                        return v[n * 3 + 1];
                }
        }
}

int main() {
        int t;
        cin >> t;
        solve();
        while (t--) {
                int n;
                cin >> n;
                int input;
                cin >> input;
                cout << n << " " << v[input] << endl;
        }
        return 0;
}