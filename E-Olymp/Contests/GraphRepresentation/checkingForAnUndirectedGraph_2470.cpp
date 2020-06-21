#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;
        
        vector<vector<int>> mat(n, vector<int>(n, 0));

        for (auto &x : mat) {
                for (auto &y : x) {
                        cin >> y;
                }
        }

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        if (i == j) {
                                if (mat[i][j] != 0) {
                                        cout << "NO" << endl;
                                        return 0;
                                }
                        } else {
                                if (mat[i][j] != mat[j][i]) {
                                        cout << "NO" << endl;
                                        return 0;
                                }
                        }
                }
        }
        cout << "YES" << endl;
        return 0;
}  