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
                int n, m;
                cin >> n >> m;

                vector<int> a(n);
                for (auto &x : a) cin >> x;
                vector<int> b(m);
                for (auto &x : b) cin >> x;
                vector<int> arr_sum(n);
                arr_sum[0] = a[0];
                for (int i = 1; i < n; i++) {
                        arr_sum[i] = arr_sum[i - 1] + a[i];
                }
                for (int i = 0; i < m; i++) { 
                        auto itr = lower_bound(arr_sum.begin(), arr_sum.end(), b[i]);
                        // cout << a[itr - arr_sum.begin()] << endl;
                        if (itr == arr_sum.begin()) {
                                cout << itr - arr_sum.begin() + 1 << " ";
                                cout << abs(b[i] - arr_sum[itr - arr_sum.begin()]) << endl;        
                        } else{ 
                                cout << itr - arr_sum.begin() + 1 << " ";
                                cout << b[i] - arr_sum[itr - arr_sum.begin() - 1] << endl;
                        }        
                }
	}
	return 0;
}