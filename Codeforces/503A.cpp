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
                int n, h, a, b, k;
                cin >> n >> h >> a >> b >> k;
                while (k--) {
                        int ta, fa, tb, fb;
                        cin >> ta >> fa >> tb >> fb;
                        if (n == 1) cout << abs(fa - fb) << endl;
                        else {
                                if (fa > max(a, b)) {
                                        cout << abs(fa - max(a, b)) + abs(ta - tb) + abs(max(a, b) - fb) << endl;
                                } else if (fa < min(a, b)) {
                                        cout << abs(fa - min(a, b)) + abs(ta - tb) + abs(min(a, t) - fb) << endl;
                                } else {
                                        cout << abs(fa - fb) + abs(ta - tb) << endl;
                                }
                        }
                }
	}
	return 0;
}