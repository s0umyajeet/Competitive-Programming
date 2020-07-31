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
                string s;
                cin >> s;
                for (int i = 0; i < s.size(); i++) {
                        if (s[i] == '1') {
                                if (count(s.begin() + i + 1, s.end(), '0') >= 6) {
                                        cout << "yes" << endl;
                                        return 0;
                                }
                        }
                }
                cout << "no" << endl;
	}
	return 0;
}