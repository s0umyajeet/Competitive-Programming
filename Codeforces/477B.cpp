#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                int n, A, B;
                cin >> n >> A >> B;

                vector<int> v(n);
                int total = 0;
                for (int i = 0; i < n; i++) {
                        cin >> v[i];
                        total += v[i];
                }
                cout << total << endl;
                for (auto x : v) cout << x << " ";
                int first_hole = (v[0] * A) / total;
                cout << first_hole << endl;
                if (first_hole >= B) cout << 0 << endl;
                else {
                        cout << "ESLe" << endl;
                        sort(v.begin() + 1, v.end(), greater<int>());
                        for (auto x : v) cout << x << " ";
                        int k = 1;
                        int count = 0;
                        while (first_hole < B) {
                                first_hole = (v[0] * A) / (total - v[k]);
                                count++;
                                k++;
                        }
                        cout << count << endl;
                }
	}
	return 0;
}