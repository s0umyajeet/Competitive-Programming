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
		int n, m;
		cin >> n >> m;
		int curr = 1;
		int steps = 0;
		for (int i = 0; i < m; i++) {
			int input;
			cin >> input;
			if (input - curr >= 0) steps += input - curr;
			else steps += n + (input - curr);
			curr = input;
		} 
		cout << steps << endl;
	}
	return 0;
}