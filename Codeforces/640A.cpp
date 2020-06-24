#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                int digits;
                if (n == 0) digits = 1;
                else digits = log10(n) + 1;
                int i = 0;
                string s = to_string(n);
                int p = count(s.begin(), s.end(), '0');
                cout << digits - p << endl;
                while (i < digits) {
                        int r = n % 10;
                        if (r != 0) cout << r * pow(10, i) << " ";
                        n /= 10;
                        i++;
                }
                cout << endl;
        }
        return 0;
}