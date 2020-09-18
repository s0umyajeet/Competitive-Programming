#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	// cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
		int n;
		cin >> n;
		vector<int> height(n);
		for (auto &x : height) cin >> x;

		int time = 0;
		time += height[0] + 1;
		for (int i = 0; i < n - 1; i++) {
			if (height[i + 1] > height[i]) {
				time += height[i + 1] - height[i] + 1; 
			} else if (height[i + 1] == height[i]) {
				time++;
			} else {
				time += height[i] - height[i + 1] + 1;
			}
		}
		cout << time + n - 1 << endl;
	}
	return 0;
}