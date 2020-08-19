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
                vector<vector<int>> adj(n + 1);
                for (int i = 1; i <= n; i++) {
                        string s;
                        getline(cin, s);
                        cout << "for i: " << i << " s = " << s << endl;
                        stringstream ss(s);
                        int temp;
                        while (ss >> temp) {
                                cout << i << " " << temp << endl;
                                adj[i].push_back(temp);
                        }
                }

                for (int i = 1; i <= n; i++) {
                        cout << i << ": ";
                        for (int j = 0; j < adj[i].size(); j++) {
                                cout << adj[i][j] << " ";
                        }
                        cout << endl;
                }
        }
}