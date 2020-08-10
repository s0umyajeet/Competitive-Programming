#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;


int bfs(vector<vector<int>> &adj, int s, int f) {
        vector<bool> visited(adj.size(), false);
        visited[s - 1] = true;
        
        queue<int> q;
        q.push(s - 1);

        vector<int> dist(adj.size(), INT_MAX);
        dist[s - 1] = 0;

        while (!q.empty()) {
                cout << 'r' << endl;
                int v = q.front();
                q.pop();
                for (auto u: adj[v]) {
                        if (!visited[u]) {
                                visited[u] = true;
                                dist[u] = dist[v] + 1;
                                q.push(u);
                                if (u == f - 1) return dist[u];
                        }
                }
        }
        return 0;
}
       
int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        // cin >> t;

        while(t--) {
                int n, m, f;
                cin >> n >> m >> f;
                // cout << n << m << f << endl;
                vector<vector<int>> adj(n);
                for (int i = 0; i < m; i++) {
                        int a, b;
                        cin >> a >> b;
                        adj[a - 1].push_back(b - 1);
                }

                for (auto x : adj) {
                        for (auto y : x) {
                                cout << y << " ";
                        }
                        cout << endl;
                }

                int maxx = -9999;
                for (int i = 0; i < n; i++) {
                        cout << bfs(adj, i, f) << endl;
                        maxx = max(maxx, bfs(adj, i, f));
                }
                cout << maxx << endl; 
        }
}