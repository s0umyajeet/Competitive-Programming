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
        // int t;
        // cin >> t;

        while(t--) {
                int n;
                cin >> n;
                int total = 0;
                vector<int> v(n);       
                int done = 0;
                for (int i = 0; i < n; i++) {
                        cin >> v[i];
                        total += v[i];
                }
                int coalition = v[0];
                vector<int> indices;
                indices.push_back(1);
                for (int i = 0; i < n; i++) {
                        if (i != 0 && v[i] <= v[0] / 2) {
                                coalition += v[i];
                                indices.push_back(i + 1); 
                        }
                        if (coalition > total / 2) {
                                done = 1;
                                break;
                        }
                }
                if (!done) cout << 0 << endl;
                else {
                        cout << indices.size() << endl;
                        for (auto x : indices) cout << x << " ";
                        cout << endl;
                }
        }
        return 0;
}