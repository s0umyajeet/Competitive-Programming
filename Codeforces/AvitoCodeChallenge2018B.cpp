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
                int n;
                cin >> n;
                map<int, int> price_map;
                for (int i = 0; i < n; i++) {
                        int a, b;
                        cin >> a >> b;
                        price_map[a] = b;
                }
                int m;
                cin >> m;
                for (int i = 0; i < m; i++) {
                        int a, b;
                        cin >> a >> b;
                        if (price_map.find(a) != price_map.end()) {
                                price_map[a] = max(b, price_map[a]);
                        } else {
                                price_map[a] = b;
                        }
                }
                
                int sum = 0;
                for (auto itr = price_map.begin(); itr != price_map.end(); itr++) {
                        sum += itr->second;
                }
                cout << sum << endl;
	}
	return 0;
}