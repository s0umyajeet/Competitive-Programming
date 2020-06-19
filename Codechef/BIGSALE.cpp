#include <bits/stdc++.h>
using namespace std;
#define int double

int32_t main() {
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;

                int price, quantity, discount, loss = 0.0;

                for (size_t i = 0; i < n; i++) {
                        cin >> price >> quantity >> discount;
                        int increased_price = price + ((discount / 100.0) * price);
                        int discounted_price = increased_price - ((discount / 100.0) * increased_price);
                        loss += (price - discounted_price) * quantity;
                }
                cout << fixed << setprecision(9) << loss << endl;
        }
        return 0;
}