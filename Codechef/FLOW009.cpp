#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                double quantity, price;
                cin >> quantity >> price;
                if (quantity > 1000) {
                        cout << fixed << 0.9 * quantity * price << endl;
                } else {
                        cout << fixed << quantity * price << endl;
                }
        }
        return 0;
}