#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, m;
        cin >> m >> n;

        char mat[n][m];
        
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                        cin >> mat[i][j];
                }
        }
        
        int border = 0;

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                        if (i + 1 < n) {
                                if (mat[i + 1][j] != mat[i][j]) {
                                        border++;
                                }
                        }
                        if (j + 1 < m) {
                                if (mat[i][j + 1] != mat[i][j]) {
                                        border++;
                                }
                        }
                }
        }
        cout << border << endl;
        return 0;
}