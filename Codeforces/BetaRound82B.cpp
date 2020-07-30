#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;


struct laptop {
        int speed;
        int ram;
        int hdd;
        int cost;
        int outdated = false;
};

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                int n;
                cin >> n;
                vector<laptop> v(n);
                for (auto &x : v) {
                        cin >> x.speed;
                        cin >> x.ram;
                        cin >> x.hdd;
                        cin >> x.cost;
                }

                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                                if (v[i].speed < v[j].speed && v[i].ram < v[j].ram && v[i].hdd < v[j].hdd) {
                                        v[i].outdated = true;
                                }
                        }
                }

                int price = 9999999999;
                int ans;
                for (int i = 0; i < n; i++) {
                        if (v[i].outdated == false && v[i].cost <= price) {
                                ans = i;
                                price = v[i].cost;
                        }
                }
                cout << ans + 1 << endl;        
	}
	return 0;
}