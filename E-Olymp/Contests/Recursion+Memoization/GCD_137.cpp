#include <bits/stdc++.h>
using namespace std;


int gcd(const vector<int> &v, int start, int end) {
        if (start == v.size() - 2 && end == v.size() - 1) {
                return __gcd(v[start], v[end]);
        } else {
                return __gcd(v[start], gcd(v, start + 1, end));
        }
}
int main() {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &x : v) cin >> x;
        if (n == 1) cout << v[0] << endl;
        else cout << gcd(v, 0, v.size() - 1);
}