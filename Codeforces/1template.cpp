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
		char trump;
		string c1, c2;
		cin >> trump >> c1 >> c2;

		map<char, int> rank = {{'6', 1}, {'7', 2}, {'8', 3}, {'9', 4}, {'T', 5}, 
				       {'J', 6}, {'Q', 7}, {'K', 8}, {'A', 9}};
		if (c1[1] == trump) {
			if (c2[1] == trump) {
				if (rank[c1[0]] > rank[c2[0]]) 
					cout << "YES" << endl;
				else cout << "NO" << endl;
			} else cout << "YES" << endl;
		} else {
			if (c1[1] == c2[1]) {
				if (rank[c1[0]] > rank[c2[0]])
					cout << "YES" << endl;
				else cout << "NO" << endl;
			} else {
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}