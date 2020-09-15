#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define INT_MAX LLONG_MAX

int n = 100, m = 100;
vector<int> petrolPrices(n);
vector<vector<pair<int, int>>> adj(n);

void Dijkstra() {
        int s = 0;
        int f = n - 1;

        set<pair<int, int>> Q;
        vector<int> dist(n, INT_MAX);
        
        Q.insert({0, s});
        dist[s] = 0;
        
        while (!Q.empty()) {
                auto top = Q.begin();
                int vertex = top->second;
                Q.erase(top);
                if (vertex == n) return;
                for (auto v : adj[vertex]) {
                        int to = v.second;
                        int w = v.first;
                        if (dist[vertex] + w < dist[to]) {
                                Q.erase({dist[to], to});
                                dist[to] = dist[vertex] + w;
                                Q.insert({dist[to], to});
                        }
                }
        }

        cout << (dist[f] == INT_MAX ? -1 : dist[f]) << endl;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	// cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
                cin >> n;
                adj.resize(n);
                petrolPrices.resize(n);
                for (auto &x : petrolPrices) cin >> x;
                cin >> m;
                while (m--) {
                        int a, b;
                        cin >> a >> b;
                        adj[a - 1].push_back({petrolPrices[a - 1], b - 1});
                        adj[b - 1].push_back({petrolPrices[b - 1], a - 1});
                }
                Dijkstra();
	}
	return 0;
}