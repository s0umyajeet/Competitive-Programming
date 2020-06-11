#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, m;
        cin >> n >> m;

        int row_wise[n][m];
        int column_wise[n][m];

        int count1 = 1;
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                        row_wise[i][j] = count1;
                               count1++;
                }
        }

        count1 = 1;
        for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                        column_wise[j][i] = count1;
                        count1++;
                }
        }

        count1 = 0;
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                        if (row_wise[i][j] == column_wise[i][j]) count1++;
                }        
        }
        cout << count1 << endl;
        return 0;
}