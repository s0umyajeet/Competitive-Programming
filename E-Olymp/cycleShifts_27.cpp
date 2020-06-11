#include <bits/stdc++.h>
using namespace std;

int main() {
        long long n;
        cin >> n;
        long long ones = __builtin_popcount(n);
        long long zeroes = log2(n) + 1 - ones;

        long long ans = 0;
        for (long long i = zeroes; i < ones + zeroes; i++) {
                ans += pow(2, i);
        }
        cout << ans << endl;
        return 0;
}