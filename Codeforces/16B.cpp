#include <bits/stdc++.h>
#define int     long long
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        //cin >> t;

        while(t--) {
                int n, m;
                cin >> n >> m;

                vector<pair<int, int>> v(m);
                for (int i = 0; i < m; i++) {
                        cin >> v[i].second >> v[i].first;
                }

                sort(v.begin(), v.end());
                int sum = 0;
                int need = n;

                for (int i = m - 1; i >= 0; i--) {
                        if (need == 0) break;
                        if (need >= v[i].second) {
                                sum += v[i].first * v[i].second;
                                need -= v[i].second;
                        } else {
                                sum += v[i].first * need;
                                need = 0;
                        }
                }
                
                cout << sum << endl;
        }
}