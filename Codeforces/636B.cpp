#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                if ((n / 2) & 1) cout << "NO" << endl;
                else {
                        vector<int> v(n);
                        int start = 2;
                        int even_sum = 0, odd_sum = 0;
                        for (int i = 0; i < n / 2; i++) { 
                                v[i] = start * (i + 1); 
                                even_sum += v[i];
                        }
                        start = 1;
                        for (int i = n / 2; i < n - 1; i++) { 
                                v[i] = (2 * start) - 1;
                                start++;
                                odd_sum += v[i];
                        }
                        v[n - 1] = even_sum - odd_sum;
                        cout << "YES" << endl;
                        for (auto x : v) cout << x << " ";
                        cout << endl;
                }
        }
        return 0;
}