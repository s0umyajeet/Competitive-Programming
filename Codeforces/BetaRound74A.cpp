#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
		int r, g, b;
                cin >> r >> g >> b;

                int turn = 0;
                int count = 0;
                for (int i = 0; r > 0 || b > 0 || g > 0; i++) {
                        if (turn == 0) {
                                r -= 2;
                                turn = 1;
                                count++;
                        } else if (turn == 1) {
                                g -= 2;
                                turn = 2;
                                count++;
                        } else if (turn == 2) {
                                b -= 2;
                                turn = 0;
                                count++;
                        }
                }
                cout << count + 29 << endl;
	}
	return 0;
}