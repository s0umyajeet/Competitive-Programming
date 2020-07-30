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
        
        int t;
        cin >> t;

        while(t--) {
                int n, k, z;
                cin >> n >> k >> z;
                vector<int> v(n);
                for (auto &x : v) cin >> x;
                int score = 0;
                score += v[0];
                int i = 1;
                while (k > 0) {
                        if (v[i - 1] > v[i] && i - 1 >= 0 && z > 0 && k > 0) {
                                score += v[i - 1];
                                i--;
                                z--;
                                k--;
                        } else {
                                score += v[i];
                                i++;
                                k--;
                        }
                }
                coutans << score << endl;
        }
        return 0;
}