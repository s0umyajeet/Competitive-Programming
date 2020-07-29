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
		int n;
                cin >> n;
                int c_1 = 0;
                int c_2 = 0;
                int c_3 = 0;
                int input;
                for (int i = 0; i < n; i++) {
                        cin >> input;
                        if (input == 1) c_1++;
                        if (input == 2) c_2++;
                        if (input == 3) c_3++;
                }
                cout << n - max({c_1, c_2, c_3}) << endl;
	}
	return 0;
}