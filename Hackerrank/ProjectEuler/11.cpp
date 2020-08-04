#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int diagonal1Prod(vector<vector<int>> &mat, int loc_x, int loc_y) {
        if (loc_x - 3 >= 0 && loc_y - 3 >= 0) {
                int prod = 1;
                for (int i = 0; i < 4; i++) {
                        prod *= mat[loc_x - i][loc_y - i];
                }
                return prod;
        }
        return -1;
}

int diagonal2Prod(vector<vector<int>> &mat, int loc_x, int loc_y) {
        if (loc_x + 3 < 20 && loc_y - 3 >= 0) {
                int prod = 1;
                for (int i = 0; i < 4; i++) {
                        prod *= mat[loc_x + i][loc_y - i];
                }
                return prod;
        } 
        return -1;
}

int diagonal3Prod(vector<vector<int>> &mat, int loc_x, int loc_y) {
        if (loc_x + 3 < 20 && loc_y + 3 < 20) {
                int prod = 1;
                for (int i = 0; i < 4; i++) {
                        prod *= mat[loc_x + i][loc_y + i];
                }
                return prod;
        }
        return -1;
}

int diagonal4Prod(vector<vector<int>> &mat, int loc_x, int loc_y) {
        if (loc_x - 3 >= 0 && loc_y + 3 < 20) {
                int prod = 1;
                for (int i = 0; i < 4; i++) {
                        prod *= mat[loc_x - i][loc_y + i];
                }
                return prod;
        } 
        return -1;
}

int upProd(vector<vector<int>> &mat, int loc_x, int loc_y) {
        if (loc_y - 3 >= 0) {
                int prod = 1;
                for (int i = 0; i < 4; i++) {
                        prod *= mat[loc_x][loc_y - i];
                }
                return prod;
        } 
        return -1;
}

int downProd(vector<vector<int>> &mat, int loc_x, int loc_y) {
        if (loc_y + 3 < 20) {
                int prod = 1;
                for (int i = 0; i < 4; i++) {
                        prod *= mat[loc_x][loc_y + i];
                }
                return prod;
        } 
        return -1;
}

int leftProd(vector<vector<int>> &mat, int loc_x, int loc_y) {
        if (loc_x - 3 >= 0) {
                int prod = 1;
                for (int i = 0; i < 4; i++) {
                        prod *= mat[loc_x - i][loc_y];
                }
                return prod;
        }
        return -1;
}

int rightProd(vector<vector<int>> &mat, int loc_x, int loc_y) {
        if (loc_x + 3 < 20) {
                int prod = 1;
                for (int i = 0; i < 4; i++) {
                        prod *= mat[loc_x + i][loc_y];
                }
                return prod;
        }
        return -1;        
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                vector<vector<int>> mat(20, vector<int> (20, -1));

                for (int i = 0; i < 20; i++) {
                        for (int j = 0; j < 20; j++) {
                                cin >> mat[i][j];
                        }
                }

                int max_prod = -9999;
                for (int i = 0; i < 20; i++) {
                        for (int j = 0; j < 20; j++) {
                                max_prod = max(max_prod, diagonal1Prod(mat, i, j));
                                max_prod = max(max_prod, diagonal2Prod(mat, i, j));
                                max_prod = max(max_prod, diagonal3Prod(mat, i, j));
                                max_prod = max(max_prod, diagonal4Prod(mat, i, j));
                                max_prod = max(max_prod, upProd(mat, i, j));
                                max_prod = max(max_prod, downProd(mat, i, j));
                                max_prod = max(max_prod, leftProd(mat, i, j));
                                max_prod = max(max_prod, rightProd(mat, i, j));
                        }
                }
                cout << max_prod << endl;


	}
	return 0;
}