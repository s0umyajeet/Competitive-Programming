#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

bool checkDistinct(int n) {
        int digits = log10(n) + 1;
        string s = to_string(n);
        set<char> s1(s.begin(), s.end());
        return s1.size() == digits;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                int l, r;
                cin >> l >> r;
                for (int i = l; i <= r; i++) {
                        if (checkDistinct(i))  {
                                cout << i << endl;
                                return 0;
                        }
                }
                cout << -1 << endl;
	}
	return 0;
}