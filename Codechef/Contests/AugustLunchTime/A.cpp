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
                vector<int> v(n);
                map<int, int> count;
                for (auto &x : v) {
                        cin >> x;
                        count[x]++;
                }
                map<int, int> count2;
                int maxx = -99999;
                for (auto x: count) {
                        count2[x.second]++;
                        maxx = max(maxx, count2[x.second]);
                }

                for (auto it = count2.begin(); it != count2.end(); it++) {
                        if (it->second == maxx) {
                                cout << it->first << endl;
                                break;
                        }
                }
	}
	return 0;
}