#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int n = 2000, m = 500000, s, f;
vector<vector<pair<int, int>>> adj(n);

void Dijkstra() {
	s--, f--;
	set<pair<int, int>> Q;
	vector<int> dist(n, INT_MAX);
	vector<int> parent(n, -1);
	dist[s] = 0;
	Q.insert({0, s});

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
				parent[to] = vertex;
			}
		}
	}

	if (dist[f] == INT_MAX) cout << -1 << endl;
	else {
		cout << dist[f] << endl;
		vector<int> path;
		for (auto v = f; v != s; v = parent[v]) path.push_back(v);
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

	int n_Cases = 1;
	// cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
		cin >> n >> m;
		adj.resize(n);
		cin >> s >> f;
		for (int i = 0; i < m; i++) {
			int from, to, w;
			cin >> from >> to >> w;
			adj[from - 1].push_back({w, to - 1});
			adj[to - 1].push_back({w, from - 1});
		}
		Dijkstra();
	}
	return 0;
}