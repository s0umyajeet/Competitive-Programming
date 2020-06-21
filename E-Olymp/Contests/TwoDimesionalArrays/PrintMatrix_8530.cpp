#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;

        int mat[n][n];
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        cin >> mat[i][j];
                }
        }

        int r, c;
        cin >> r >> c;
        for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                        cout << mat[i][j] << " ";
                }
                cout << endl;
        }
        return 0;
}
