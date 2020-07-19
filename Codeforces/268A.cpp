#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;
        vector<int> v(n, -1);
        int p;
        cin >> p;
        int input;
        for (int i = 0; i < p; i++) {
                cin >> input;
                v[input - 1] = 1;
        }
        int q;
        cin >> q;
        for (int i = 0; i < q; i++) {
                cin >> input;
                v[input - 1] = 1;
        }
        if (find(v.begin(), v.end(), -1) == v.end()) {
                cout << "I become the guy." << endl;
        } else cout << "Oh, my keyboard!" << endl;
        return 0;
}