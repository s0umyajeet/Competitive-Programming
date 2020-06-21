#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, m;
        cin >> m >> n;

        char mat[n][m];
        int countA = 0;
        vector<int> v;
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                        cin >> mat[i][j];
                        if (mat[i][j] == 'A') countA++;
                }
                v.push_back(countA);
                countA = 0;
        }

        int border = 0;
        for (int i = 1; i < v.size(); i++) {
                border += abs(v[i] - v[i - 1]);
        }
        cout << border + n << endl;
}