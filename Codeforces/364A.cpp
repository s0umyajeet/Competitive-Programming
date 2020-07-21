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
                int n;
                cin >> n;
                vector<int> v(n);
                map<int, int> pos;
                int sum = 0;
                for (int i = 0; i < n; i++) {
                        cin >> v[i];
                        sum += v[i];
                        pos[v[i]] = i + 1;
                } 

                int each = (sum * 2) / n;
                for (int i = 0; i < n / 2; i++) {
                        cout << pos[v[i]] << " " << pos[each - v[i]] << endl;
                }
        }
}