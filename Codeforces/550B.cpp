#include <bits/stdc++.h>
#define int     long long
#define YES     cout << "YES" << endl
#define NO      cout << "NO" << endl
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        // cin >> t;

        while(t--) {
                int n;
                cin >> n;
                vector<int> v(n);
                vector<int> even;
                vector<int> odd;
                for (auto &x : v) {
                        cin >> x;               
                        if (x % 2 == 0) even.push_back(x);
                        else odd.push_back(x);
                }
                int ans = 0;
                if (abs((int)even.size() - (int)odd.size()) <= 1) {
                        cout << 0 << endl;
                } else {
                        if (even.size() < odd.size()) {
                                sort(odd.begin(), odd.end(), greater<int>());
                                for (int i = even.size() + 1; i < odd.size(); i++) {
                                        ans += odd[i];
                                }
                        } else {
                                sort(even.begin(), even.end(), greater<int>());
                                for (int i = odd.size() + 1; i < even.size(); i++) {
                                        ans += even[i];
                                }
                        }
                        cout << ans << endl;
                }
                return 0;
        }
        return 0;
}