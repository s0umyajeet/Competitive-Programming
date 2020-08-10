#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int n, m;

void bfs(const vector<vector<int>> &adj, int start, vector<int> &dist) {
        vector<bool> visited(n, false);
        visited[start - 1] = 0;

        queue<int> q;
        q.push(start - 1);
        
        dist[start - 1] = 0;
        
        while (!q.empty()) {
                int v = q.front();
                q.pop();
                for (auto u : adj[v]) {
                        if (!visited[u]) {
                                visited[u] = true;
                                dist[u] = min(dist[u], dist[v] + 1);
                                q.push(u);
                        }
                }
        }
}

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        // cin >> t;

        while(t--) {              
                cin >> n >> m;
                vector<vector<int>> adj(n);
                vector<int> dist(n, 99999999);
                for (int i = 0; i < m; i++) {
                        int a, b;
                        cin >> a >> b;
                        adj[a - 1].push_back(b - 1);
                        adj[b - 1].push_back(a - 1);
                }

                int k;
                cin >> k;

                for (int i = 0; i < k; i++) {
                        int start;
                        cin >> start;
                        bfs(adj, start, dist);
                }

                auto itr = max_element(dist.begin(), dist.end());
                cout << *itr << endl;
                cout << itr - dist.begin() + 1 << endl;
        }
}