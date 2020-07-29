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
        set<string> s1;
        int count = 0;
	while (t--) {
		string s;
                getline(cin >> ws, s);
                if (s1.find(s) == s1.end()) {
                        s1.insert(s);
                        count++;
                }
	}
        cout << count << endl;
	return 0;
}