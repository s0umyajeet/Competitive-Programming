//using set for O(E + VlogV)
#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define INT_MAX LLONG_MAX
using namespace std;

int n, m;

void Dijkstra(vector<vector<pair<int, int>>> &adj) {
        int s = 0;
        int f = n - 1;
        
        vector<int> dist(n, INT_MAX);
        vector<bool> visited(n, false);
        vector<int> p(n, -1);
        
        dist[s] = 0;

        set<pair<int, int>> queue;
        queue.insert({0, s});
	
        while(!queue.empty()) {
		auto top = queue.begin();
		int u = top->second;
		queue.erase(top);
		if (u == n) return;
		for (auto x : adj[u]) { 
			int to = x.second; 
                        int edge = x.first;
			if (dist[u] + edge < dist[to]) {
				queue.erase({dist[to], to});
				dist[to] = dist[u] + edge;
				queue.insert({dist[to], to});
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