#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int n;
string s;

bool iPresent() {
	return s.find('I') != string::npos;
}

bool checkMoreThanOneI() {
	return count(s.begin(), s.end(), 'I') > 1;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	// cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
		cin >> n;
		cin >> s;
		if (iPresent()) 
			cout << (checkMoreThanOneI() ? 0 : 1) << endl;
		else cout << count(s.begin(), s.end(), 'A') << endl;
	}
	return 0;
}