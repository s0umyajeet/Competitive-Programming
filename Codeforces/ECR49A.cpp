#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
                int n;
                cin >> n;
                string s;
                cin >> s;

                int l = 0;
                int r = n - 1;
                bool fail = false;
                while (l < r) {
                        if ((s[l] != 'a' || s[l] != 'z') && (s[r] != 'a' || s[r] != 'z')) {
                                if (s[l] - 1 == s[r] - 1 || s[l] + 1 == s[r] + 1 || s[l] - 1 == s[r] + 1 || s[l] + 1 == s[r] - 1) {}
                                else fail = true;
                        } else if (s[l] == 'a') {
                                if (s[r] == 'a' || s[r] == 'c') {}
                                else fail = true;
                        } else if (s[r] == 'a') {
                                if (s[l] == 'a' || s[l] == 'c') {}
                                else fail = true;
                        } else if (s[l] == 'z') {
                                if (s[r] == 'z' || s[r] == 'x') {}
                                else fail = true;
                        } else if (s[r] == 'z') {
                                if (s[l] == 'z' || s[l] == 'x') {}
                                else fail = true;
                        }
                        l++;
                        r--;
                }
                if (!fail) cout << "YES" << endl;
                else cout << "NO" << endl;
	}
	return 0;
}