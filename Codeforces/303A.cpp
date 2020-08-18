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
                vector<bool> car(n, true);
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                                int input;
                                cin >> input;
                                if (i > j) {
                                        if (input == 1) car[i] = false;
                                        if (input == 2) car[j] = false;
                                        if (input == 3) {
                                                car[i] = false;
                                                car[j] = false;
                                        }
                                }
                        }
                }
                cout << count(car.begin(), car.end(), true) << endl;
                for (int i = 0; i < n; i++) if (car[i]) cout << i + 1 << " ";
                cout << endl;
	}
	return 0;
}