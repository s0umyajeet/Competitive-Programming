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
        //cin >> t;

        while(t--) {
                int n;
                cin >> n;
                vector<int> v(n);
                vector<int> visited(n, -1);
                for (auto &x : v) cin >> x;

                sort(v.begin(), v.end());

                int colors = 0;
                for (int i = 0; i < n; i++) {
                        if (visited[i] == -1) {
                                colors++;
                                visited[i] = 1;
                                for (int j = i + 1; j < n; j++) {
                                        if (v[j] % v[i] == 0 && visited[j] != 1) {
                                                visited[j] = 1;
                                        } 
                                }
                        }
                }
                cout << colors << endl;
        }
        return 0;
}