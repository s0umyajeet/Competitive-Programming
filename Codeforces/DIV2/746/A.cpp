#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
		int n, h;
		cin >> n >> h;

		set<int> s1;
		for (int i = 0; i < n; i++) {
			int input;
			cin >> input;
			s1.insert(input);
		}

		vector<int> v(s1.begin(), s1.end());
		int size = v.size();
		
		if (h % (v[size - 1] + v[size - 2]) != 0) 
			cout << 2 * (h / (v[size - 1] + v[size - 2])) + 1 << endl;
		else 
			cout <<  2 * (h / (v[size - 1] + v[size - 2])) << endl;
	}
	return 0;
}
