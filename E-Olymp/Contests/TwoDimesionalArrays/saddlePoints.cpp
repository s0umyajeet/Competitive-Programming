#include <bits/stdc++.h>
using namespace std;

struct point {
        int x, y;
};

int main() {
        int n, m;
        cin >> n >> m;

        int mat[n][m];
        vector<pair<int, point>> row_min(n);
        point min_point;
        int minn = 99999;
        
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                        cin >> mat[i][j];
                        if (mat[i][j] <= minn) {
                                minn = mat[i][j];
                                min_point = {i, j};
                        }
                }
                row_min[i] = {minn, min_point};
        }

        int maxx = -9999;
        point max_point;

        int saddle = 0;
        for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                        if (mat[j][i] >= maxx) {
                                maxx = mat[j][i];
                                max_point = {i, j};
                        }
                }
                for (int k = 0; k < row_min.size(); k++) {
                        if (maxx == row_min[k].first && max_point.x == row_min[k].second.x && max_point.y == row_min[k].second.y) {
                                saddle++;
                        }
                }
        }
        cout << saddle << endl;
}