#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 0;
        cin >> t;
        
        while (t--) {
                int n;
                cin >> n;
                
                int v[n];
                int sum = 0;
                for (int i = 0; i < n; i++) {
                        cin >> v[i];
                        sum += v[i];
                }

                int indexSum = (n * (n + 1)) / 2;
                
                if (sum < 0) {
                        cout << "NO" << endl;
                } else if (sum == 0) {
                        cout << "YES" << endl;
                } else {
                        if (indexSum >= sum) {
                                cout << "YES" << endl;
                        } else cout << "NO" << endl;
                }
        }
	return 0;
}