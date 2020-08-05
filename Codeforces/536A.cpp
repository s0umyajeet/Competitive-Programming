#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                int n;
                cin >> n;
                char arr[n][n];
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                                cin >> arr[i][j];
                        }
                }
                int count = 0;
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                                bool fail = false;
                                if (arr[i][j] == 'X') {
                                        if (i - 1 >= 0 && j - 1 >= 0) {
                                                if (arr[i - 1][j - 1] != 'X')
                                                        fail = true;
                                        } else fail = true;
                                        if (i + 1 < n && j - 1 >= 0) {
                                                if (arr[i + 1][j - 1] != 'X') 
                                                        fail = true;
                                        } else fail = true;
                                        if (i + 1 < n && j + 1 < n) {
                                                if (arr[i + 1][j + 1] != 'X') 
                                                        fail = true;
                                        } else fail = true;
                                        if (i - 1 >= 0 && j + 1 < n) {
                                                if (arr[i - 1][j + 1] != 'X')
                                                        fail = true;
                                        } else fail = true;
                                        if (!fail) count++;
                                }
                        }
                }

                cout << count << endl;
	}
	return 0;
}