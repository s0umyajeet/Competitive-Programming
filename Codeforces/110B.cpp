#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
#define float double
#define PI 3.1415926536
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
		int n;
		cin >> n;
		vector<int> radii(n);
		for (auto &x : radii) cin >> x;
		sort(radii.begin(), radii.end());

                float area = 0.0f;
                if (n % 2 == 0) {
                        for (int i = 0; i < n - 1; i += 2) {
                                area += PI * abs((pow(radii[i], 2) - pow(radii[i + 1], 2)));
                        }
                } else {
                        area += PI * pow(radii[0], 2);
                        for (int i = 1; i < n - 1; i += 2) {
                                area += PI * abs(pow(radii[i], 2) - pow(radii[i + 1], 2));
                        }
                }
                cout << fixed << setprecision(10) << area << endl;
	}
	return 0;
}