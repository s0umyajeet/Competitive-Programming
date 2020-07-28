#include <bits/stdc++.h>
#define int     long long
#define YES     cout << "YES" << endl
#define NO      cout << "NO" << endl
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

void dfs(vector<bool> &visited, vector<vector<int>> &adj, int n, int v) {
        visited[v] = true;
        for (int u : adj[v]) {
                if (!visited[u]) {
                        dfs(visited, adj, u, );
                }
        }
}
int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        // cin >> t;

        while(t--) {
                int n;
                cin >> n;
                int input;
                vector<vector<int>> adj(n);
                vector<bool visited(n);
                for (int i = 2; i <= n; i++) {
                        cin >> input;
                        adj[input].push_back(i);
                }

                for (auto x : adj) {
                        for (auto y : x) {
                                cout << y << " ";
                        }
                        cout << endl;
                }
        }
        return 0;
}