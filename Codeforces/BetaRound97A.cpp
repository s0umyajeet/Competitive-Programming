#include <bits/stdc++.h>
#define int long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> m;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            m[v[i]] = i + 1;
        }
        for (auto itr = m.begin(); itr != m.end(); itr++) {
            cout << itr->second << " ";
        }
	}
	return 0;
}