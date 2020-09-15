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
                int n, k;
                cin >> n >> k;
                string s;
                cin >> s;
                int c_1 = count(s.begin(), s.end(), '1');
                int c_0 = count(s.begin(), s.end(), '0');
                int gcd = __gcd(c_1, c_0); 
                if (c_1 == n || c_0 == n) {
                        cout << s << endl;
                } else {
                        c_1 /= gcd;
                        c_0 /= gcd;
                        if (c_1 + c_0 == k) { 
                                string x;
                                for (int i = 0; i < c_1; i++) x += "1";
                                for (int j = 0; j < c_0; j++) x += "0";
                                string y(x.rbegin(), x.rend());
                                string ans;
                                for (int i = 0; i < n / k; i++) {
                                        if (i % 2 == 0) ans += x;
                                        else ans += y;
                                }
                                cout << ans << endl;
                        } else if (c_1 + c_0 < k && (k % (c_1 + c_0) == 0)) {
                                string x;
                                c_1 *= 2;
                                c_0 *= 2;
                                for (int i = 0; i < c_1; i++) x += "1";
                                for (int j = 0; j < c_0; j++) x += "0";
                                string y(x.rbegin(), x.rend());
                                string ans;
                                for (int i = 0; i < n / k; i++) {
                                        if (i % 2 == 0) ans += x;
                                        else ans += y;
                                }
                                cout << ans << endl;
                        } else {
                                cout << "IMPOSSIBLE" << endl;
                        }
                }
        }
	return 0;
}