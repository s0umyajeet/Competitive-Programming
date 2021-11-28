#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
string s; 

bool match(int j) {
	string sample;
	for (int i = 0; i < j; i++) if (s[i] != 'a') sample += s[i];
	return (sample == s.substr(j));
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	// cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
		cin >> s;
		string p;
		for (auto x : s) if (x != 'a') p += x;
		if (p.size() == 0) cout << s << endl;
		else if (*s.rbegin() == 'a') cout << ":(" << endl;
		else {
			if (p.size() % 2 == 0 && (p.substr(0, p.size() / 2) == p.substr(p.size() / 2)))
				cout << p.substr(p.size() / 2) << endl;
			else cout << ":(" << endl;
		}
	}	
	return 0;
}