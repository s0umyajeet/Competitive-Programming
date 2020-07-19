#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                int a, b;
                cin >> a >> b;
                int minn = min(a, b);
                int maxx = max(a, b);

                if (2 * minn >= maxx) {
                        cout << pow(2 * minn, 2) << endl;
                } else {
                        cout << pow(maxx, 2) << endl;
                }
        }
        return 0;
}