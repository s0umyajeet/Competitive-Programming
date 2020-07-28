#include <bits/stdc++.h>
#define int     long long
#define YES     cout << "YES" << endl
#define NO      cout << "NO" << endl
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

int n, m;

void dfs(int v, vector<vector<int>> &adj, vector<bool> &visited) {
        if (!visited[v]) {
                visited[v] = true;
                cout << v << " ";
        }
        for (auto x : adj[v]) {
                if (!visited[x]) {
                        dfs(x, adj, visited);
                }
        }
}
        
int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        // cin >> t;

        while(t--) {
                // int n, m;
                cin >> n >> m;
                vector<bool> visited(n + 1, false);
                vector<vector<int>> adj(n + 1);
                for (int i = 0; i < m; i++) {
                        int a, b;
                        cin >> a >> b;
                        adj[a].push_back(b);
                        adj[b].push_back(a);
                }

                int v;
                cin >> v;
                dfs(v, adj, visited);
        }
        return 0;
}