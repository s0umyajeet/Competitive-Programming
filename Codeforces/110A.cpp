#include <bits/stdc++.h>
#define int     long long
#define YES     cout << "YES" << endl
#define NO      cout << "NO" << endl
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;


int rowSum(int r, int n, vector<vector<int>> &v) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
                sum += v[r][i];
        }
        return sum;
}

int colSum(int c, int n, vector<vector<int>> &v) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
                sum += v[i][c];
        }
        return sum;
}

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        //cin >> t;

        while(t--) {
                int n;
                cin >> n;
                vector<vector<int>> v(n, vector<int>(n, 1));

                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                                cin >> v[i][j];
                        }
                }
                int count = 0;
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                                if (colSum(j, n, v) > rowSum(i, n, v)) {
                                        count++;
                                }
                        }
                }
                cout << count << endl;                               
        }
}