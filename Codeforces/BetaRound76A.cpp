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
                string s;
                cin >> s;
                map<string, int> m1;
                for (int i = 0; i < 10; i++) {
                        string s1;
                        cin >> s1;
                        m1[s1] = i;
                }
                for (int i = 0; i < 80; i += 10) {
                        string sample = s.substr(i, 10);
                        cout << m1[sample];
                }
	}
	return 0;
}