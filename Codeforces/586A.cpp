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
                string s;
                cin >> s;
                int count_0 = 0;
                int count_1 = 0;
                for (int i = 0; i < n; i++) {
                        if (s[i] == 'n') count_1++;
                        if (s[i] == 'z') count_0++;
                }

                for (int i = 0; i < count_1; i++) {
                        cout << 1 << " ";
                }

                for (int i = 0; i < count_0; i++) {
                        cout << 0 << " ";
                }
	}
	return 0;
}