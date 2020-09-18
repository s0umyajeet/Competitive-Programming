#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

bool func(int x) {
	return x < 0;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	// cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
		int n;
		cin >> n;
		
		vector<int> v(n);
		vector<int> folders;
		int count = 0;

		for (auto &x : v) cin >> x;

		int size = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] < 0) size++;
			if ((size == 2 && find_if(v.begin() + i + 1, v.end(), func) != v.end()) || i == n - 1) {
				folders.push_back(i + 1);
				size = 0;
			}
		}

		cout << folders.size() << endl;
		for (int i = 0; i < folders.size(); i++) {
			if (i == 0) cout << folders[i] << " ";
			else cout << folders[i] - folders[i - 1] << " ";
		}
	}
	return 0;
}