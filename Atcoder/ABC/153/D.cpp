#include <bits/stdc++.h>
using namespace std;

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        long long H, x;
        cin >> H;
        x = log2(H);
        cout << fixed << (long long)(2 * (pow(2, x) - 1) + 1) << endl;
        return 0;
}