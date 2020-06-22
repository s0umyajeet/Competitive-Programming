#include <bits/stdc++.h>
using namespace std;

int n, s, f;

int bfs(vector<vector<int>> adj) {
        queue<int> q;
        q.push(s - 1);

        vector<int> visited(n, 0);
        visited[s - 1] = 1;

        vector<int> dist(n, INT_MAX);  //distance of each vertex from the source vertex;
        dist[s - 1] = 0;               //distance of source vertex from itself is 0

        while (!q.empty()) {
                int v = q.front();
                q.pop();
                for (auto i : adj[v]) {
                        if (!visited[i]) {
                                visited[i] = 1;
                                dist[i] = dist[v] + 1;
                                q.push(i);
                                if (i == f - 1) return dist[i];
                        }
                }
        }
        return 0;
}

int main() {
        
        cin >> n >> s >> f;
        vector<vector<int>> mat(n, vector<int>(n, 0));
        vector<vector<int>> adj(n);
        
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        cin >> mat[i][j];
                        if (mat[i][j]) adj[i].push_back(j);
                }
        }

        cout << bfs(adj) << endl;
        return 0;
}