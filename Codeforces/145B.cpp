#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main() {
	ios_base::sync_with_stdio(0);

	cin.tie(0);

	int n_Cases = 1;
	// cin >> n_Cases;

	fstream cin, cout;
	cin.open("input.txt", ios::in);
	cout.open("output.txt", ios::out);

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
		int n, k;
		cin >> n >> k;		
		vector<int> v(n), orig(n);
		for (int i = 0; i < n; i++) 
			cin >> v[i];
		orig = v;
		sort(v.begin(), v.end());
		cout << v[n - k] << endl;
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (count >= k) break;
			if (orig[i] >= v[n - k]) {
				cout << i + 1 << " ";
				count++;
			}
		}
	}
	return 0;
}
//40 30 20