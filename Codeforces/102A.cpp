#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	// cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
                int r1, r2, c1, c2, d1, d2;
                cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

                int reqSum = (r1 + r2 + c1 + c2 + d1 + d2) / 3;

                for (int x = 1; x <= 9; x++) {
                        for (int y = 1; y <= 9; y++) {
                                for (int z = 1; z <= 9; z++) {
                                        for (int w = 1; w <= 9; w++) {
                                                set<int> s = {x, y, w, z};
                                                if (s.size() != 4) continue;
                                                else {
                                                        vector<bool> c(7, false);
                                                        c[0] = (x + y + z + w == reqSum);
                                                        c[1] = (x + z == c1);
                                                        c[2] = (y + w == c2);
                                                        c[3] = (x + y == r1);
                                                        c[4] = (z + w == r2);
                                                        c[5] = (x + w == d1);
                                                        c[6] = (y + z == d2);
                
                                                        bool fail = false;
                                                        for (int i = 0; i < c.size(); i++) {
                                                                if (!c[i]) {
                                                                        fail = true;
                                                                        break;
                                                                }
                                                        }
                                                        if (!fail) {
                                                                cout << x << " " <<  y << endl << z << " " << w;
                                                                return 0;
                                                        }
                                                }
                                        }
                                }
                        }
                }
                cout << -1 << endl;
	}
	return 0;
}

                