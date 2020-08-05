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

                int rem = n % 4;
                if (rem == 1) cout << 0 << " A" << endl;
                else {
                        map<int, int> rank = {{1, 1}, {3, 2}, {2, 3}, {0, 4}};
                        vector<int> label = {n + 2, n + 1};
                        int rem_w_2 = label[0] % 4;
                        int rem_w_1 = label[1] % 4;

                        if (rank[rem_w_2] > rank[rem_w_1]) {
                                cout << 1;
                                if (rem_w_1 == 1) {
                                        cout << " A" << endl;
                                } else if (rem_w_1 == 2) {
                                        cout << " C" << endl;
                                } else if (rem_w_1 == 3) {
                                        cout << " B" << endl;
                                }
                        } else {
                                cout << 2;
                                if (rem_w_2 == 1) {
                                        cout << " A" << endl;
                                } else if (rem_w_2 == 2) {
                                        cout << " C" << endl;
                                } else if (rem_w_2 == 3) {
                                        cout << " B" << endl;
                                }
                        }
                }

	}
	return 0;
}