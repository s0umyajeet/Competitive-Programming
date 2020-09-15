#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"


int method1(vector<vector<int>> &matrix, int curr) {
        return matrix[curr].size();
}

int method2(vector<vector<int>> &matrix, int curr) {
        int count = 0;
        for (int i = 0; i < matrix.size(); i++) {
                auto v = matrix[i];
                if (find(v.begin(), v.end(), curr) != v.end()) count++;
        }
        return count;
}

int32_t main() {
        int tc = 0;
        cin >> tc;
        for (int tcc = 0; tcc < tc; tcc++) {
                int n;
                cin >> n;
                vector<int> vel(n);
                for (auto &x : vel) cin >> x;
                
                vector<vector<int>> matrix(n + 1);
                
                for (int i = n - 1; i >= 0; i--) {
                        for (int j = 0; j < i; j++) {
                                if (vel[j] > vel[i]) {
                                        matrix[vel[i]].push_back(vel[j]);
                                }
                        }
                }

                for (int i = 1; i <= n; i++) {
                        cout << "for i: " << i << " values: ";
                        for (int j = 0; j < matrix[i].size(); j++) {
                                cout << matrix[i][j] << " ";
                        }
                        cout << endl;
                }
                
                int minScore = 99999999;
                int maxScore = -99999999;

                for (int i = 0; i < n; i++) {
                        int curr = vel[i];
                        int score = method1(matrix, curr) + method2(matrix, curr);
                        minScore = min(minScore, score);
                        maxScore = max(maxScore, score);
                }
                cout << minScore + 1 << " " << maxScore + 1 << endl;
        }
        return 0;
}