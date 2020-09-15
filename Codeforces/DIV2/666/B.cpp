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
                int n;
                cin >> n;
                vector<int> v(n);
                int sumVector = 0;
                for (auto &x : v) {
                        cin >> x;
                        sumVector += x;
                } 
                int sum = 0;
                sum = n;
                int idx = 1;
                while (sum <= sumVector) {
                        idx++;
                        sum = (pow(idx, n) - 1) / (idx - 1);
                }
                int prev = (pow(idx - 1, n) - 1) / (idx - 1);
                int cost = 0;                                
                if (sumVector - prev < sum - sumVector) idx--;
                for (int j = 0; j < n; j++) {
                        cost += max(v[j], (int)pow(idx, j)) - min(v[j], (int)pow(idx, j));                
                }
                cout << cost << endl;
	}
	return 0;
}