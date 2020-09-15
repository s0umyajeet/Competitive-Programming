#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                vector<vector<int>> mat(n, vector<int>(n, 0));
                for (auto &x : mat) for (auto &y : x) cin >> y; 
                if (n == 1) cout << 0 << endl;
                else {  
                        auto v = mat[0];
                        int count = 0;
                        for (int i = 0; i < n - 1; i++) {
                                int target = abs(v[i] - v[i + 1]);
                                count += (target != 1 && target != n);
                        }
                        count++;
                        bool white = (v[n - 1] == n);
                        cout << (white ? count - 1 : count) << endl;
                }
        }
        return 0;
}
