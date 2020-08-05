#include <bits/stdc++.h>
using namespace std;
#define int long long

void display_factors(int n) {
        while (n % 8 == 0) {
                cout << "by 8 " << n << endl;
                n /= 8;
        }

        while (n % 4 == 0) {
                cout << "by 4 " << n << endl;
                n /= 4;
        }

        while (n % 2 == 0) {
                cout << "by 2 " << n << endl;
                n /= 2;
        }
        cout << n << endl;
}

int32_t main() {
        int n;
        cin >> n;
        display_factors(n);
        return 0;
}