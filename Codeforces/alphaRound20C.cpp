//Previous submission made in D language. If this gets TLE too, don't blame D.
//dense graph implementation O(n^2) --> finding the next minimum vertex using O(n) iteration
//without set or priority queue (possible TLE)

#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int n, m;

int findNextMin(vector<bool> &visited, vector<int> &dist) {
        int min_dist = INT_MAX;
        int min_index = 0;
        for (int i = 0; i < n; i++) {
                if (!visited[i] && dist[i] <= min_dist) {
                        min_dist = dist[i];
                        min_index = i;
                }
        }
        return min_index;
}

void Dijkstra(vector<vector<pair<int, int>>> &adj) {
        int s = 0;
        int f = n - 1;
        vector<int> dist(n, INT_MAX);
        vector<bool> visited(n, false);
        vector<int> p(n, -1);
        dist[s] = 0;
        for (int count = 0; count < n; count++) { 
                int u = findNextMin(visited, dist);
                visited[u] = true; 
                for (pair<int, int> x : adj[u]) {
                        int to = x.second;
                        int edge = x.first;
                        if (!visited[to] && dist[u] != INT_MAX && dist[u] + edge < dist[to]) {
                                dist[to] = dist[u] + edge; 
                                p[to] = u;
                        }
                }
        } 
        if (dist[f] == INT_MAX) {
                cout << -1 << endl;
        } else {
                vector<int> path;
                for (int v = f; v != s; v = p[v]) path.push_back(v);
                path.push_back(s);
                for (int i = path.size() - 1; i >= 0; i--) {
                        cout << path[i] + 1 << " ";
                }
                cout << endl;
        }
}
        
int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int tCount = 1;
        // cin >> tc;

        while (tCount--) {
                cin >> n >> m;
                vector<vector<pair<int, int>>> adj(n);
                for (int i = 0; i < m; i++) {
                        int a, b, w;
                        cin >> a >> b >> w;
                        adj[a - 1].push_back({w, b - 1});
                        adj[b - 1].push_back({w, a - 1});
                }
                Dijkstra(adj);
        }
}