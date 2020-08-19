#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int n, q;
int bfs(int s, vector<vector<int>> &adj, vector<int> &val, vector<bool> &done) {
        if (!done[s - 1]) {
                queue<int> q;
                q.push(s - 1);

                vector<int> visited(n, 0);
                visited[s - 1] = 1;

                vector<int> dist(n, INT_MAX);  
                dist[s - 1] = 0;               

                while (!q.empty()) {
                        int v = q.front();
                        q.pop();
                        for (auto i : adj[v]) {
                                if (!visited[i]) {
                                        visited[i] = 1;
                                        dist[i] = dist[v] + 1;
                                        if (dist[i] % 2 == 0) {
                                                val[s - 1] += val[i];
                                                val[i] = 0;
                                                done[i] = true;
                                        }
                                        q.push(i);
                                }
                        }
                }
                done[s - 1] = true;
                return 0;
        }
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
                cin >> n >> q;
                vector<bool> done(n);
                vector<int> v(n);
                for (auto &x : v) cin >> x;
                vector<vector<int>> adj(n);
                for (int i = 0; i < n - 1; i++) {
                        int u, v;
                        cin >> u >> v;
                        adj[u - 1].push_back(v - 1);
                }
                int p;
                while (q--) {
                        cin >> p;
                        bfs(p, adj, v, done);
                }
                for (int i = 0; i < v.size(); i++) {
                        cout << v[i] << " ";
                } 
                cout << endl;
	}
	return 0;
}