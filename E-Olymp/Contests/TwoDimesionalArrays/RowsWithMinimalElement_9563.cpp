#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, m;
        cin >> n >> m;
        int minn = 999999;

        int mat[n][m];
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                        cin >> mat[i][j];
                        minn = min(minn, mat[i][j]);
                }
        }
        
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                        if (mat[i][j] == minn) {
                                cout << i + 1 << " ";
                        }
                }
        }
        return 0;
}