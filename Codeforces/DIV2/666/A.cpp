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
                int n;
                cin >> n;
                vector<string> v(n);
                for (auto &x : v) cin >> x;
                map<char, int> countt;
                for (auto x : v) {
                        for (auto y : x) {
                                countt[y]++;
                        }
                }
                bool fail = false;
                for (auto x : countt) {
                        if (x.second % n != 0) {
                                fail = true;
                                break;
                        }
                }
                cout << (fail ? "NO" : "YES") << endl;
        }
	return 0;
}