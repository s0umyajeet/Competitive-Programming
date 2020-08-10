#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;
	while (t--) {
                int n, k;
                cin >> n >> k;
                vector<pair<int, int>> v(n);
                for (int i = 0; i < n; i++) {
                        cin >> v[i].first >> v[i].second;
                }
                sort(v.begin(), v.end());
                int count = 2;
                for (int i = 1; i < v.size(); i++) {
                        double gap = (v[i].first - (double)v[i].second / 2.0) - (v[i - 1].first + (double)v[i - 1].second / 2.0); 
                        if (abs(gap - (double)k) < 0.00001) count++;
                        else if (gap > k) count += 2;
                }
                cout << count << endl;
        }
	return 0;
}