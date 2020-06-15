#include <bits/stdc++.h>
using namespace std;

long long power(long long a, long long b) {
        if (a == 1) return a;
        long long ans = 1;
        for (int i = 0; i < b; i++) {
                ans *= a;
        }
        return ans;
}

int main() {
        int t;
        cin >> t;
        while (t--) {
                long long a, b, x;
                cin >> a >> b >> x;

                long long powered = power(a, b);
                int t = powered / x;
                if (abs(t * x - powered) <= abs(powered - (t + 1) * x)) {
                        cout << t * x << endl;
                } else cout << (t + 1) * x << endl;
        }
        return 0;
}