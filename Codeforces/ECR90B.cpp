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
		string s;
                cin >> s;
                int zero = count(s.begin(), s.end(), '0');
                int one = count(s.begin(), s.end(), '1');
                if (min(zero, one) % 2 == 0) cout << "NET" << endl;
                else cout << "DA" endl;
	}
	return 0;
}