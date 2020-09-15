#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define INT_MAX LLONG_MAX

int n = 100, m = 100, k = 100;
int shortestDist = 0;
vector<vector<pair<int, int>>> adj(n);

bool Dijkstra(vector<vector<pair<int, int>>> adj) {
        int s = 0, f = n - 1;
        set<pair<int, int>> Q;
        vector<int> dist(n, INT_MAX);
        
        Q.insert({0, s});
        dist[s] = 0;
        
        while (!Q.empty()) {
                auto top = Q.begin();
                int u = top->second;
                Q.erase(top);
                for (auto v : adj[u]) {
                        auto to = v.second;
                        auto w = v.first;
                        if (dist[u] + w < dist[to]) {
                                Q.erase({dist[to], to});
                                dist[to] = dist[u] + w;
                                Q.insert({dist[to], to});
                        }
                }
        }
        return dist[f] == shortestDist;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	// cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
                cin >> n >> m >> k;
                adj.resize(n);
                vector<int> route(k);

                for (auto &x : route) {
                        cin >> x;
                        x--;
                }
                
                for (int i = 0; i < m; i++) {
                        int a, b, w;
                        cin >> a >> b >> w;
                        adj[a - 1].push_back({w, b - 1});
                        adj[b - 1].push_back({w, a - 1});
                }

                bool found = false;
                for (int i = 0; i < k - 1; i++) {
                        int target = route[i + 1];
                        for (auto &x : adj[i]) {
                                if (x.second == target) {
                                        shortestDist += x.first;
                                }
                        }
                }

                for (int i = 0; i < k - 1; i++) {
                        int target = route[i + 1];
                        auto temp = adj;
                        for (auto &x : temp[i]) {
                                if (x.second == target) {
                                        x.first = 1e5L;
                                }
                        }
                        if (Dijkstra(temp)) {
                                found = true;
                                break;
                        }
                }
                cout << (found ? "yes" : "no") << endl;
        }
	return 0;
}