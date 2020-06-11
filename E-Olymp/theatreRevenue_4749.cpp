#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, m;
        cin >> n >> m;
        long long revenue = 0;

        int hall[n][m];
        int occupied[n][m];

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                        cin >> hall[i][j];
                }
        }

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                        cin >> occupied[i][j];
                }
        }

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                        if (occupied[i][j]) revenue += hall[i][j];
                }
        }
        cout << revenue << endl;

}