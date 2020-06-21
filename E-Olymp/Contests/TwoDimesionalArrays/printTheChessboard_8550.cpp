#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;

        int mat[n][n];
        int count1 = 1;
        int count2 = ceil((n * n) / 2.0f) + 1; 
        
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        if ((i + j) % 2 == 0) {
                                mat[i][j] = count1;
                                count1++;
                        } else {
                                mat[i][j] = count2;
                                count2++;
                        }
                }
        }
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        cout << setw(2) << mat[i][j] << " ";
                }
                cout << endl;
        }
        return 0;
}