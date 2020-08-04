#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
                int n;
                cin >> n;
                int max_length = -1;
                int winner = -1;
                for (int i = 1; i <= n; i++) {
                        int length = 0;
                        int k = i;
                        while (k != 1) {
                                if (k % 2 == 0) k /= 2;
                                else k = 3 * k + 1;
                                length++;
                        }
                        if (length >= max_length) {
                                max_length = length;
                                if (i > winner) {
                                        winner = i;
                                }
                        }
                }
                cout << winner << endl;
        }
	return 0;
}