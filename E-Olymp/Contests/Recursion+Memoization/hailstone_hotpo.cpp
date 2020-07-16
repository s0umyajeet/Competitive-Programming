#include <bits/stdc++.h>
using namespace std;
#define BIG 4

unordered_map<int, int> v;
int calculate(int n, int &maxx);

void solve() {
        for (int i = 1; i < BIG; i++) {
                v[i] = calculate(i, i);
        }
}

int calculate(int n, int &maxx) {
        cout << n << " " << maxx << endl;
        if (n == 1) return maxx;
        if (v.find(n) != v.end()) return v[n];
        if (n % 2 == 0) return calculate(n / 2, (int&)max(maxx, n));
        else return calculate(n * 3 + 1, (int&)max(maxx, n));
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