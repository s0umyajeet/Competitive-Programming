#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> mat(n, vector<int>(n, 0));

        for (int i = 0; i < m; i++) {
                int a, b;
                cin >> a >> b;
                mat[a - 1][b - 1]++; 
        }

        for (auto x : mat) {
                for (auto y : x) {
                        if (y > 1) {
                                cout << "YES" << endl;
                                return 0;
                        }
                }
        }
        cout << "NO" << endl;
        return 0;
}