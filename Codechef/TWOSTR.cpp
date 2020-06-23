#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                string x, y;
                cin >> x >> y;

                bool possible = true;
                for (int i = 0; i < x.size(); i++) {
                        if (x[i] != '?' && y[i] != '?' && x[i] != y[i])
                                possible = false;
                }

                if (!possible) cout << "No" << endl;
                else cout << "Yes" << endl;
        }
        return 0;
}