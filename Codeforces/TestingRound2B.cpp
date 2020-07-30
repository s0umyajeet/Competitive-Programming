#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

void printSpaces(int n) {
	for (int i = 0; i < n; i++) {
		cout << " ";
	}
}
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
		string s;
		cin >> s;	

		map<char, int> track;
		int nesting = 0;

		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '<' && s[i + 1] != '/') {  
				track[s[i + 1]] = nesting;
				printSpaces(2 * nesting);
				cout << "<" << s[i + 1] << ">" << endl;
				nesting++;
				i += 2;
			} else {
				printSpaces(2 * track[s[i + 2]]);
				nesting--;
				cout << "</" << s[i + 2] << ">" << endl;
				i += 3;
			}
		}
	}
	return 0;
}