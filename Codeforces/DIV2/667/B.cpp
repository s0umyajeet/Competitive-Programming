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
                int n;
                cin >> n;
                vector<int> v(n);
                for (auto &x : v) cin >> x;
                for (int i = 0; i < v.size(); i++) {
                        bool finished = false;
                        if (v[i] >= 0) {
                                bool found = false;
                                for (int j = i + 1; j < v.size(); j++) {
                                        if (v[j] < 0) {
                                                found = true;
                                                v[j] += v[i];
                                                v[i] = 0;
                                        }
                                        if (found) break;
                                }
                                if (!found) {
                                        int sum = 0;
                                        for (int k = 0; k < n; k++) {
                                                if (v[k] > 0) sum += v[k];
                                        }
                                        cout << sum << endl;
                                        finished = true;
                                }
                                if (finished) break;
                        }
                }
	}
	return 0;
}