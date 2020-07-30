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
		vector<int> towers(1001);
                int n;
                cin >> n;
                int input;
                for (int i = 0; i < n; i++) {
                        cin >> input;
                        towers[input]++;
                }

                cout << *max_element(towers.begin(), towers.end());
                int count = 0;
                for (int i = 0; i < 1001; i++) {
                        if (towers[i] > 0) count++;
                }
                cout << " " << count << endl;
	}
	return 0;
}