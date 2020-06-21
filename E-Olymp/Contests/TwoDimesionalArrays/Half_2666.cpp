#include <iostream>
using namespace std;

int main() {
        int n;
        cin >> n;

        int mat[n][n];
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        if (i + j < n - 1) mat[i][j] = 2;
                        if (i + j == n - 1) mat[i][j] = 0;
                        if (i + j > n - 1) mat[i][j] = 1; 
                }
        }

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        cout << mat[i][j];
                }
                cout << endl;
        }
        return 0;
}