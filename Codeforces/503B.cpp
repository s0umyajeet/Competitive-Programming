#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

void dfs(vector<vector<int>> &adj, vector<bool> &visited, int v) {
        visited[v] = true;
        for (auto u : adj[v]) {
                if (!visited[u]) {
                        dfs(adj, visited, u);
                } else cout << u << " ";
        }
} 
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                int n;
                cin >> n;
                vector<int> v(n + 1);
                vector<vector<int>> adj(n + 1);
                
                for (int i = 1; i <= n; i++) {
                        cin >> v[i];
                        adj[i].push_back(v[i]);
                }

                for (int i = 1; i <= n; i++) {
                        vector<bool> visited(n + 1, false);
                        dfs(adj, visited, i);
                }
	}
	return 0;
}