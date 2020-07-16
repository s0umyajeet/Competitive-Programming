#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while(t--) {
                int n, m, x, y;
                cin >> n >> m >> x >> y;

                char arr[n][m];
                
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                                cin >> arr[i][j];
                        }
                }

                int cost = 0;
                
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                                if (arr[i][j] == '.') {
                                        if (j + 1 < m && arr[i][j + 1] == '.') {
                                                cost += min(2 * x, y);
                                                j++;
                                        } else cost += x;
                                }
                        }
                }
                cout << cost << endl;
        }
        return 0;   
}