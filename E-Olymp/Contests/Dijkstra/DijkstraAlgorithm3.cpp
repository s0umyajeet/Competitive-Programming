//using adjacency list with set 
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define INT_MAX LLONG_MAX

int s, f;
int n = 100;
vector<vector<pair<int, int>>> adj(n);

void Dijkstra() {
        s--, f--;
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
                cin >> n >> s >> f;
                adj.resize(n);
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                                int input;
                                cin >> input;
                                if (input != -1) {
                                        adj[i].push_back({input, j});
                                }
                        }
                }
                Dijkstra();
	}
	return 0;
}