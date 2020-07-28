#include <bits/stdc++.h>
#define int     long long
#define YES     cout << "YES" << endl
#define NO      cout << "NO" << endl
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

void dfs(vector<vector<int>> &adj, int v, vector<int> &visited) {
        visited[v] = 1;
        for (auto x : adj[v]) {
                if (visited[x] == -1) {
                        dfs(adj, x, visited);
                }
        }
}
int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        // cin >> t;

        while(t--) {
                int n;
                cin >> n;
                int input;
                vector<vector<int>> adj(n + 1);
                vector<int> visited(n + 1, -1);
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                                cin >> input;
                                if (input == 1) {
                                        adj[i].push_back(j);
                                        adj[j].push_back(i);
                                }
                        }
                }
                int count = 0;
                while (find(visited.begin(), visited.end(), -1) != visited.end()) {
                        count++;
                        int target = 0;
                        for (int i = 1; i < n + 1; i++) {
                                if (visited[i] == -1) {
                                        target = i;
                                        break;
                                }
                        }
                        dfs(adj, target, visited);
                }
                cout << count - 1 << endl;
        }
}