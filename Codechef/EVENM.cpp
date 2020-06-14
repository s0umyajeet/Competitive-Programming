#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                int mat[n][n];

                int even = 2;
                int odd = 1;
                for (int k = 0; k < n; k++) {
                        for (int i = 0; i < n; i++) {
                                if (k % 2) {
                                        mat[i][k - i] = even;
                                        even += 2;
                                } else {
                                        mat[i][k - i] = odd;
                                        odd += 2;
                                }  
                        }
                }

                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                                cout << mat[i][j] << " ";
                        }
                        cout << endl;
                }
        }
        return 0;
}