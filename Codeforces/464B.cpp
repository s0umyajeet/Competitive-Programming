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
		int n, k;
                cin >> n >> k;

                vector<int> v(k);
                for (auto &x : v) cin >> x;

                int box_type = -1;
                int num_of_boxes = 0;
                int min_rem = 999999999999999999;
                for (int i = 0; i < k; i++) {
                        if (n % v[i] <= min_rem) {
                                min_rem = n % v[i];
                                box_type = i + 1;
                                num_of_boxes = n / v[i];
                        }
                }

                cout << box_type << " " << num_of_boxes;
	}
	return 0;
}