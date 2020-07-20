#include <bits/stdc++.h>
using namespace std;
#define coutans cout << "ans: "
int main() {
        int t;
        cin >> t;
        while (t--) {
                int n, m;
                cin >> n >> m;
                if (m * n % 2 == 0) cout << (m * n) / 2 << endl;
                else cout << (m * n) / 2 + 1 << endl;
        }
        return 0;
}