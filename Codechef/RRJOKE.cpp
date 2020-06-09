#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                int a, b, exor = 0;
                for (int i = 1; i <= n; i++) {
                        cin >> a >> b;
                        exor = exor ^ i;
                }
                cout << exor << endl;
        }
        return 0;
}