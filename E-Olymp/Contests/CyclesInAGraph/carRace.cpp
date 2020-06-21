#include <bits/stdc++.h>
using namespace std;

bool dfs(int i, vector<bool> &visited, int parent, vector<vector<int>> adj_mat) {
        visited[i] = true;  
        for (auto u = adj_mat[i].begin(); u != adj_mat[i].end(); u++) {
                //if an adjacent is not yet visited
                if (!visited[*u]) {
                        if (dfs(*u, visited, i, adj_mat)) {
                              return true;
                      }
                //an adjacent is visited and not parent of the current 
                } else if (*u != parent) {
                        return true;
                }
        }
        return false;
}

bool checkCycle(vector<vector<int>> adj_mat, int n, vector<bool> &visited) {
        for (int i = 0; i < n; i++) {
                if (!visited[i]) {
                        if (dfs(i, visited, -1, adj_mat))
                                return true;
                }
        }
        return false;
}


int main() {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj_mat(n);
        vector<bool> visited(n, false);

        set<pair<int, int>> edges;
        for (int i = 0; i < m; i++) {
                int a, b;
                cin >> a >> b;
                if (edges.find({a, b}) == edges.end()) {
                        edges.insert({a, b});
                        adj_mat[a - 1].push_back(b - 1);
                        adj_mat[b - 1].push_back(a - 1);
                }
        }

        if (checkCycle(adj_mat, n, visited)) cout << "YES" << endl;
        else cout << "NO" << endl;
        return 0;
}