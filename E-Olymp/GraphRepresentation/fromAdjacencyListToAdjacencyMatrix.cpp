#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;

        vector<vector<int>> mat(n, vector<int>(n, 0));
        
        for (int i = 0; i < n; i++) {
                int d, input;
                cin >> d;
                for (int j = 0; j < d; j++) {
                        cin >> input;
                        mat[i][input - 1] = 1;
                }
        }        
        
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++)  {
                        cout << mat[i][j] << " ";
                }
                cout << endl;
        }
        return 0;
}