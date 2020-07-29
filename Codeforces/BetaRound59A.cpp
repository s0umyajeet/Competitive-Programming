#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

struct entity {
        string name;
        string job;
};

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
		int n;
                cin >> n;
                vector<entity> v(n);
                for (auto &x : v) cin >> x.name >> x.job;
                for (int i = 0; i < n; i++) {
                        if (v[i].job == "rat") {
                                cout << v[i].name << endl;
                        }
                }
                for (int i = 0; i < n; i++) {
                        if (v[i].job == "woman" or v[i].job == "child") {
                                cout << v[i].name << endl;
                        }
                }
                for (int i = 0; i < n; i++) {
                        if (v[i].job == "man") {
                                cout << v[i].name << endl;
                        }
                }
                for (int i = 0; i < n; i++) {
                        if (v[i].job == "captain") {
                                cout << v[i].name << endl;
                        }
                }
	}
	return 0;
}