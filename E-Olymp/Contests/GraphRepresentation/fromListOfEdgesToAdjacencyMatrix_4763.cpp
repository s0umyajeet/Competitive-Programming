#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> mat(n, vector<int>(n, 0));

        for (int i = 0; i < m; i++) {
                int a, b;
                cin >> a >> b;
                mat[a - 1][b - 1] = 1;
                mat[b - 1][a - 1] = 1;
        }

        for (auto x : mat) {
                for (auto y : x) {
                        cout << y << " ";
                }
                cout << endl;
        }
        return 0;
}