#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int n;

void process(vector<int> &v) {
	sort(v.begin(), v.end());
	for (int i = n - 1; i >= 1; i--) {
		v[i] = v[i] - v[i - 1];
	}
}

bool allSame(vector<int> &v) {
	bool flag = true;
	for (int i = 1; i < n; i++) {
		if (v[i] != v[i - 1]) flag = false;
	}
	return flag;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	// cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
		cin >> n;
		vector<int> v(n);
		for (auto &x : v) cin >> x;

		while (!allSame(v)) {
			process(v);
		}
		cout << v[0] * n << endl;
	}
	return 0;
}