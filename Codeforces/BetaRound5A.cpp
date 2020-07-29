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
	string s;
	int ans = 0;
	int members = 0;
	while (getline(cin, s)) {
		if (s[0] == '+') members++;
		else if (s[0] == '-') members--;
		else {
			auto itr = find(s.begin(), s.end(), ':');
			itr++;
			int l = s.end() - itr;
			ans += members * l;
		}
	}
	cout << ans << endl;
	return 0;
}