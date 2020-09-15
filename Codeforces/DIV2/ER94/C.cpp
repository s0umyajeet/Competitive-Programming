#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
                string s;
                cin >> s;
                string w = string(s.size(), '-');   
                int x;
                cin >> x;
                int n = s.size();
                bool fail = false;
                for (int i = 0; i < n; i++) {
                        if (s[i] == '0') {
                                if (i - x >= 0) {
                                        w[i - x] = '0';
                                }
                                if (i + x < n) {
                                        w[i + x] = '0';
                                }
                        }
                }
                for (int i = 0; i < n; i++) {
                        if (s[i] == '1') {
                                if (i - x >= 0) {
                                        if (w[i - x] == '0') {
                                                fail = true;
                                                break;
                                        } else w[i - x] = '1';
                                }
                                if (i + x < n) {
                                        if (w[i + x] == '0') {
                                                fail = true;
                                                break;
                                        } else w[i + x] = '1';
                                }
                        }
                }
                if (fail) cout << -1 << endl;
                else {
                        if (w.find('-') != string::npos) {
                                for (auto x : w) {
                                        if (x == '-') cout << 1;
                                        else cout << x;
                                }
                                cout << endl;
                        } else cout << w << endl;
                }
	}
	return 0;
}