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
                int n, m;
                cin >> n >> m;
                vector<int> state(n + 1, -1);
                map<int, int> mapp;
                for (int i = 1; i <= m; i++) {
                        int input;
                        cin >> input;
                        for (int j = input; j <= n; j++) {
                                if (state[j] == -1) {
                                        state[j] = 1;
                                        mapp[j] = input;
                                }
                        }
                }
                for (auto x : mapp) cout << x.second << " ";
                cout << endl;
	}
	return 0;
}