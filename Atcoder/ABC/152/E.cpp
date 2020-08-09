#include <bits/stdc++.h>
using namespace std;

unsigned long long gcd(unsigned long long a, unsigned long long b) {
        if (b == 0)
        return a;
        else return gcd(b, a % b);       
}

int main() {
        unsigned long long n, lcm = 1, ans = 0;
        cin >> n;
        vector<int> v(n);

        for (auto &x : v) cin >> x;
        for (unsigned long long i = 0; i < v.size(); i++) lcm = (lcm * v[i]) / gcd(lcm, v[i]);
        cout << lcm << endl;    
        for (unsigned long long i = 0; i < v.size(); i++) {
                ans += (lcm / v[i]);
        }
        cout << ans << endl;
        return 0;
}

// (a * b) mod m = (a mod m * b mod m) mod m
// (a / b) x
// (a * 1 / b) mod m = (a mod m * b^-1 mod m) mod m