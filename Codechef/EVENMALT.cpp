#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {

        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;

                int arr2d[n][n];

                int mov = 1;
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                                arr2d[i][j] = mov;
                                mov++;
                        }
                }

                //if n is even
                if (!(n & 1)) {
                        for (int i = 1; i < n; i += 2) {
                                for (int j = 0; j < n; j += 2) {
                                        swap(arr2d[i][j], arr2d[i][j + 1]);                        
                                }
                        }
                }

                //otherwise
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                                cout << arr2d[i][j] << " ";
                        }
                        cout << endl;
                }
        }
        return 0;
}