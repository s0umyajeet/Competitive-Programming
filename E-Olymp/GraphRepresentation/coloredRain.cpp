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
        vector<int> v(n);       
        for (auto &x : v) cin >> x;

        int count = 0;
        
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        if (mat[i][j] == 1) {
                                if (v[i] != v[j]) count++;
                        }
                }
        }
        cout << count / 2 << endl;
}